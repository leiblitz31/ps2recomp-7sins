#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00493210
// Address: 0x493210 - 0x493420
void sub_00493210_0x493210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00493210_0x493210");
#endif

    switch (ctx->pc) {
        case 0x493254u: goto label_493254;
        default: break;
    }

    ctx->pc = 0x493210u;

    // 0x493210: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x493210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x493214: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x493214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x493218: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x493218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x49321c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x49321cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x493220: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x493220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x493224: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x493224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x493228: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x493228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49322c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x49322cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x493230: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x493230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x493234: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x493234u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x493238: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x493238u;
    {
        const bool branch_taken_0x493238 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x493238) {
            ctx->pc = 0x493248u;
            goto label_493248;
        }
    }
    ctx->pc = 0x493240u;
    // 0x493240: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x493240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x493244: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x493244u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_493248:
    // 0x493248: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x493248u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    // 0x49324c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x49324Cu;
    {
        const bool branch_taken_0x49324c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49324c) {
            ctx->pc = 0x493318u;
            goto label_493318;
        }
    }
    ctx->pc = 0x493254u;
label_493254:
    // 0x493254: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x493254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493258: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x493258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49325c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x49325cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x493260: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x493260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x493264: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x493264u;
    {
        const bool branch_taken_0x493264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x493264) {
            ctx->pc = 0x493278u;
            goto label_493278;
        }
    }
    ctx->pc = 0x49326Cu;
    // 0x49326c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x49326cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493270: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x493270u;
    {
        const bool branch_taken_0x493270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493270) {
            ctx->pc = 0x49340Cu;
            goto label_49340c;
        }
    }
    ctx->pc = 0x493278u;
label_493278:
    // 0x493278: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x493278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49327c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x49327cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x493280: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x493280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x493284: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x493284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493288: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x493288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49328c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x49328cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x493290: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x493290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x493294: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x493294u;
    {
        const bool branch_taken_0x493294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x493294) {
            ctx->pc = 0x4932A8u;
            goto label_4932a8;
        }
    }
    ctx->pc = 0x49329Cu;
    // 0x49329c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x49329cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4932a0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x4932A0u;
    {
        const bool branch_taken_0x4932a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4932a0) {
            ctx->pc = 0x49340Cu;
            goto label_49340c;
        }
    }
    ctx->pc = 0x4932A8u;
label_4932a8:
    // 0x4932a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4932a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4932ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4932acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4932b0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4932b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x4932b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4932b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4932b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4932b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4932bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4932bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4932c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4932c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4932c4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4932C4u;
    {
        const bool branch_taken_0x4932c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4932c4) {
            ctx->pc = 0x4932D8u;
            goto label_4932d8;
        }
    }
    ctx->pc = 0x4932CCu;
    // 0x4932cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4932ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4932d0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x4932D0u;
    {
        const bool branch_taken_0x4932d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4932d0) {
            ctx->pc = 0x49340Cu;
            goto label_49340c;
        }
    }
    ctx->pc = 0x4932D8u;
label_4932d8:
    // 0x4932d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4932d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4932dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4932dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4932e0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4932e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x4932e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4932e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4932e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4932e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4932ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4932ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4932f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4932f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4932f4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4932F4u;
    {
        const bool branch_taken_0x4932f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4932f4) {
            ctx->pc = 0x493308u;
            goto label_493308;
        }
    }
    ctx->pc = 0x4932FCu;
    // 0x4932fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4932fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493300: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x493300u;
    {
        const bool branch_taken_0x493300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493300) {
            ctx->pc = 0x49340Cu;
            goto label_49340c;
        }
    }
    ctx->pc = 0x493308u;
label_493308:
    // 0x493308: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x493308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49330c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x49330cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x493310: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x493310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x493314: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x493314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_493318:
    // 0x493318: 0x1e00ffce  bgtz        $s0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x493318u;
    {
        const bool branch_taken_0x493318 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x493318) {
            ctx->pc = 0x493254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493254;
        }
    }
    ctx->pc = 0x493320u;
    // 0x493320: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x493320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x493324: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x493324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493328: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x493328u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49332c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x49332cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x493330: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x493330u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x493334: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x493334u;
    {
        const bool branch_taken_0x493334 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x493334) {
            ctx->pc = 0x493344u;
            goto label_493344;
        }
    }
    ctx->pc = 0x49333Cu;
    // 0x49333c: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x49333cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x493340: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x493340u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_493344:
    // 0x493344: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x493344u;
    {
        const bool branch_taken_0x493344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x493344) {
            ctx->pc = 0x493408u;
            goto label_493408;
        }
    }
    ctx->pc = 0x49334Cu;
    // 0x49334c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49334cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x493350: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x493350u;
    {
        const bool branch_taken_0x493350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x493350) {
            ctx->pc = 0x4933D8u;
            goto label_4933d8;
        }
    }
    ctx->pc = 0x493358u;
    // 0x493358: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x493358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x49335c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x49335Cu;
    {
        const bool branch_taken_0x49335c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x49335c) {
            ctx->pc = 0x4933A8u;
            goto label_4933a8;
        }
    }
    ctx->pc = 0x493364u;
    // 0x493364: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x493364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x493368: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x493368u;
    {
        const bool branch_taken_0x493368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x493368) {
            ctx->pc = 0x493378u;
            goto label_493378;
        }
    }
    ctx->pc = 0x493370u;
    // 0x493370: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x493370u;
    {
        const bool branch_taken_0x493370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493370) {
            ctx->pc = 0x493408u;
            goto label_493408;
        }
    }
    ctx->pc = 0x493378u;
label_493378:
    // 0x493378: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x493378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49337c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x49337cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x493380: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x493380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x493384: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x493384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x493388: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x493388u;
    {
        const bool branch_taken_0x493388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x493388) {
            ctx->pc = 0x49339Cu;
            goto label_49339c;
        }
    }
    ctx->pc = 0x493390u;
    // 0x493390: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x493390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493394: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x493394u;
    {
        const bool branch_taken_0x493394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493394) {
            ctx->pc = 0x49340Cu;
            goto label_49340c;
        }
    }
    ctx->pc = 0x49339Cu;
label_49339c:
    // 0x49339c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x49339cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4933a0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4933a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4933a4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4933a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_4933a8:
    // 0x4933a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4933a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4933ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4933acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4933b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4933b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4933b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4933b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4933b8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4933B8u;
    {
        const bool branch_taken_0x4933b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4933b8) {
            ctx->pc = 0x4933CCu;
            goto label_4933cc;
        }
    }
    ctx->pc = 0x4933C0u;
    // 0x4933c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4933c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4933c4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4933C4u;
    {
        const bool branch_taken_0x4933c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4933c4) {
            ctx->pc = 0x49340Cu;
            goto label_49340c;
        }
    }
    ctx->pc = 0x4933CCu;
label_4933cc:
    // 0x4933cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4933ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4933d0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4933d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4933d4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4933d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_4933d8:
    // 0x4933d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4933d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4933dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4933dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4933e0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4933e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4933e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4933e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4933e8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4933E8u;
    {
        const bool branch_taken_0x4933e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4933e8) {
            ctx->pc = 0x4933FCu;
            goto label_4933fc;
        }
    }
    ctx->pc = 0x4933F0u;
    // 0x4933f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4933f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4933f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4933F4u;
    {
        const bool branch_taken_0x4933f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4933f4) {
            ctx->pc = 0x49340Cu;
            goto label_49340c;
        }
    }
    ctx->pc = 0x4933FCu;
label_4933fc:
    // 0x4933fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4933fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493400: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x493400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x493404: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x493404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_493408:
    // 0x493408: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x493408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_49340c:
    // 0x49340c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49340cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x493410: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x493410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x493414: 0x3e00008  jr          $ra
    ctx->pc = 0x493414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49341Cu;
    // 0x49341c: 0x0  nop
    ctx->pc = 0x49341cu;
    // NOP
    ctx->pc = 0x493420u;
}

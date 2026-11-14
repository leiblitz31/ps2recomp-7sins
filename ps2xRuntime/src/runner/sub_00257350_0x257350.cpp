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

// Function: sub_00257350
// Address: 0x257350 - 0x257560
void sub_00257350_0x257350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257350_0x257350");
#endif

    switch (ctx->pc) {
        case 0x257394u: goto label_257394;
        default: break;
    }

    ctx->pc = 0x257350u;

    // 0x257350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x257350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x257354: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x257354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x257358: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x257358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25735c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25735cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x257360: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x257360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x257364: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x257364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257368: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x257368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25736c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x25736cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x257370: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x257370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x257374: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x257374u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x257378: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x257378u;
    {
        const bool branch_taken_0x257378 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x257378) {
            ctx->pc = 0x257388u;
            goto label_257388;
        }
    }
    ctx->pc = 0x257380u;
    // 0x257380: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x257380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x257384: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x257384u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_257388:
    // 0x257388: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x257388u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    // 0x25738c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x25738Cu;
    {
        const bool branch_taken_0x25738c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25738c) {
            ctx->pc = 0x257458u;
            goto label_257458;
        }
    }
    ctx->pc = 0x257394u;
label_257394:
    // 0x257394: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x257394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257398: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x257398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25739c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25739cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2573a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2573a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2573a4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2573A4u;
    {
        const bool branch_taken_0x2573a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2573a4) {
            ctx->pc = 0x2573B8u;
            goto label_2573b8;
        }
    }
    ctx->pc = 0x2573ACu;
    // 0x2573ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2573acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2573b0: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2573B0u;
    {
        const bool branch_taken_0x2573b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2573b0) {
            ctx->pc = 0x25754Cu;
            goto label_25754c;
        }
    }
    ctx->pc = 0x2573B8u;
label_2573b8:
    // 0x2573b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2573b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2573bc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2573bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2573c0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2573c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2573c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2573c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2573c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2573c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2573cc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2573ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2573d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2573d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2573d4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2573D4u;
    {
        const bool branch_taken_0x2573d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2573d4) {
            ctx->pc = 0x2573E8u;
            goto label_2573e8;
        }
    }
    ctx->pc = 0x2573DCu;
    // 0x2573dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2573dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2573e0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2573E0u;
    {
        const bool branch_taken_0x2573e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2573e0) {
            ctx->pc = 0x25754Cu;
            goto label_25754c;
        }
    }
    ctx->pc = 0x2573E8u;
label_2573e8:
    // 0x2573e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2573e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2573ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2573ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2573f0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2573f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2573f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2573f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2573f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2573f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2573fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2573fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257400: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x257400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257404: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257404u;
    {
        const bool branch_taken_0x257404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x257404) {
            ctx->pc = 0x257418u;
            goto label_257418;
        }
    }
    ctx->pc = 0x25740Cu;
    // 0x25740c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25740cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257410: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x257410u;
    {
        const bool branch_taken_0x257410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257410) {
            ctx->pc = 0x25754Cu;
            goto label_25754c;
        }
    }
    ctx->pc = 0x257418u;
label_257418:
    // 0x257418: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x257418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25741c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25741cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x257420: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x257420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x257424: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x257424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257428: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x257428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25742c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x25742cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257430: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x257430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257434: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257434u;
    {
        const bool branch_taken_0x257434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x257434) {
            ctx->pc = 0x257448u;
            goto label_257448;
        }
    }
    ctx->pc = 0x25743Cu;
    // 0x25743c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25743cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257440: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x257440u;
    {
        const bool branch_taken_0x257440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257440) {
            ctx->pc = 0x25754Cu;
            goto label_25754c;
        }
    }
    ctx->pc = 0x257448u;
label_257448:
    // 0x257448: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x257448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25744c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x25744cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x257450: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x257450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x257454: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x257454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_257458:
    // 0x257458: 0x1e00ffce  bgtz        $s0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x257458u;
    {
        const bool branch_taken_0x257458 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x257458) {
            ctx->pc = 0x257394u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257394;
        }
    }
    ctx->pc = 0x257460u;
    // 0x257460: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x257460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257464: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x257464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257468: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x257468u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25746c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25746cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x257470: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x257470u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x257474: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257474u;
    {
        const bool branch_taken_0x257474 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x257474) {
            ctx->pc = 0x257484u;
            goto label_257484;
        }
    }
    ctx->pc = 0x25747Cu;
    // 0x25747c: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x25747cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x257480: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x257480u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_257484:
    // 0x257484: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x257484u;
    {
        const bool branch_taken_0x257484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257484) {
            ctx->pc = 0x257548u;
            goto label_257548;
        }
    }
    ctx->pc = 0x25748Cu;
    // 0x25748c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25748cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257490: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x257490u;
    {
        const bool branch_taken_0x257490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x257490) {
            ctx->pc = 0x257518u;
            goto label_257518;
        }
    }
    ctx->pc = 0x257498u;
    // 0x257498: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x257498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25749c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25749Cu;
    {
        const bool branch_taken_0x25749c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25749c) {
            ctx->pc = 0x2574E8u;
            goto label_2574e8;
        }
    }
    ctx->pc = 0x2574A4u;
    // 0x2574a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2574a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2574a8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2574A8u;
    {
        const bool branch_taken_0x2574a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2574a8) {
            ctx->pc = 0x2574B8u;
            goto label_2574b8;
        }
    }
    ctx->pc = 0x2574B0u;
    // 0x2574b0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2574B0u;
    {
        const bool branch_taken_0x2574b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2574b0) {
            ctx->pc = 0x257548u;
            goto label_257548;
        }
    }
    ctx->pc = 0x2574B8u;
label_2574b8:
    // 0x2574b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2574b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2574bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2574bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2574c0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2574c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2574c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2574c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2574c8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2574C8u;
    {
        const bool branch_taken_0x2574c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2574c8) {
            ctx->pc = 0x2574DCu;
            goto label_2574dc;
        }
    }
    ctx->pc = 0x2574D0u;
    // 0x2574d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2574d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2574d4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2574D4u;
    {
        const bool branch_taken_0x2574d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2574d4) {
            ctx->pc = 0x25754Cu;
            goto label_25754c;
        }
    }
    ctx->pc = 0x2574DCu;
label_2574dc:
    // 0x2574dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2574dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2574e0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2574e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2574e4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2574e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2574e8:
    // 0x2574e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2574e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2574ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2574ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2574f0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2574f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2574f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2574f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2574f8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2574F8u;
    {
        const bool branch_taken_0x2574f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2574f8) {
            ctx->pc = 0x25750Cu;
            goto label_25750c;
        }
    }
    ctx->pc = 0x257500u;
    // 0x257500: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x257500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257504: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x257504u;
    {
        const bool branch_taken_0x257504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257504) {
            ctx->pc = 0x25754Cu;
            goto label_25754c;
        }
    }
    ctx->pc = 0x25750Cu;
label_25750c:
    // 0x25750c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25750cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257510: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x257510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x257514: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x257514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_257518:
    // 0x257518: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x257518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25751c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25751cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257520: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x257520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257524: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x257524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x257528: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257528u;
    {
        const bool branch_taken_0x257528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x257528) {
            ctx->pc = 0x25753Cu;
            goto label_25753c;
        }
    }
    ctx->pc = 0x257530u;
    // 0x257530: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x257530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257534: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x257534u;
    {
        const bool branch_taken_0x257534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x257534) {
            ctx->pc = 0x25754Cu;
            goto label_25754c;
        }
    }
    ctx->pc = 0x25753Cu;
label_25753c:
    // 0x25753c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257540: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x257540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x257544: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x257544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_257548:
    // 0x257548: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x257548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_25754c:
    // 0x25754c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25754cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257550: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x257550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x257554: 0x3e00008  jr          $ra
    ctx->pc = 0x257554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25755Cu;
    // 0x25755c: 0x0  nop
    ctx->pc = 0x25755cu;
    // NOP
    ctx->pc = 0x257560u;
}

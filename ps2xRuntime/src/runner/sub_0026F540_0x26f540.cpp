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

// Function: sub_0026F540
// Address: 0x26f540 - 0x26f750
void sub_0026F540_0x26f540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F540_0x26f540");
#endif

    switch (ctx->pc) {
        case 0x26f584u: goto label_26f584;
        default: break;
    }

    ctx->pc = 0x26f540u;

    // 0x26f540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26f540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26f544: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26f544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26f548: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x26f548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26f54c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x26f54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x26f550: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x26f550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x26f554: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x26f554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26f558: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26f558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f55c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x26f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26f560: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26f560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26f564: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x26f564u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x26f568: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F568u;
    {
        const bool branch_taken_0x26f568 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x26f568) {
            ctx->pc = 0x26F578u;
            goto label_26f578;
        }
    }
    ctx->pc = 0x26F570u;
    // 0x26f570: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x26f570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x26f574: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x26f574u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_26f578:
    // 0x26f578: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x26f578u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    // 0x26f57c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x26F57Cu;
    {
        const bool branch_taken_0x26f57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f57c) {
            ctx->pc = 0x26F648u;
            goto label_26f648;
        }
    }
    ctx->pc = 0x26F584u;
label_26f584:
    // 0x26f584: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26f584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f588: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26f588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f58c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f590: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26f590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f594: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F594u;
    {
        const bool branch_taken_0x26f594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26f594) {
            ctx->pc = 0x26F5A8u;
            goto label_26f5a8;
        }
    }
    ctx->pc = 0x26F59Cu;
    // 0x26f59c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f5a0: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x26F5A0u;
    {
        const bool branch_taken_0x26f5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f5a0) {
            ctx->pc = 0x26F73Cu;
            goto label_26f73c;
        }
    }
    ctx->pc = 0x26F5A8u;
label_26f5a8:
    // 0x26f5a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f5ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x26f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x26f5b0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x26f5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x26f5b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f5b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f5bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f5c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f5c4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F5C4u;
    {
        const bool branch_taken_0x26f5c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26f5c4) {
            ctx->pc = 0x26F5D8u;
            goto label_26f5d8;
        }
    }
    ctx->pc = 0x26F5CCu;
    // 0x26f5cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f5d0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x26F5D0u;
    {
        const bool branch_taken_0x26f5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f5d0) {
            ctx->pc = 0x26F73Cu;
            goto label_26f73c;
        }
    }
    ctx->pc = 0x26F5D8u;
label_26f5d8:
    // 0x26f5d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f5dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x26f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x26f5e0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x26f5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x26f5e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f5e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f5ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f5f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f5f4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F5F4u;
    {
        const bool branch_taken_0x26f5f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26f5f4) {
            ctx->pc = 0x26F608u;
            goto label_26f608;
        }
    }
    ctx->pc = 0x26F5FCu;
    // 0x26f5fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f600: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x26F600u;
    {
        const bool branch_taken_0x26f600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f600) {
            ctx->pc = 0x26F73Cu;
            goto label_26f73c;
        }
    }
    ctx->pc = 0x26F608u;
label_26f608:
    // 0x26f608: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26f608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f60c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x26f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x26f610: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x26f610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x26f614: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26f614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f618: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26f618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f61c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f620: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26f620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f624: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F624u;
    {
        const bool branch_taken_0x26f624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26f624) {
            ctx->pc = 0x26F638u;
            goto label_26f638;
        }
    }
    ctx->pc = 0x26F62Cu;
    // 0x26f62c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f630: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x26F630u;
    {
        const bool branch_taken_0x26f630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f630) {
            ctx->pc = 0x26F73Cu;
            goto label_26f73c;
        }
    }
    ctx->pc = 0x26F638u;
label_26f638:
    // 0x26f638: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26f638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f63c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x26f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x26f640: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x26f640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x26f644: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x26f644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_26f648:
    // 0x26f648: 0x1e00ffce  bgtz        $s0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x26F648u;
    {
        const bool branch_taken_0x26f648 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x26f648) {
            ctx->pc = 0x26F584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26f584;
        }
    }
    ctx->pc = 0x26F650u;
    // 0x26f650: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x26f650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26f654: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26f654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f658: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x26f658u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26f65c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26f660: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x26f660u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x26f664: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F664u;
    {
        const bool branch_taken_0x26f664 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x26f664) {
            ctx->pc = 0x26F674u;
            goto label_26f674;
        }
    }
    ctx->pc = 0x26F66Cu;
    // 0x26f66c: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x26f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x26f670: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x26f670u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_26f674:
    // 0x26f674: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x26F674u;
    {
        const bool branch_taken_0x26f674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f674) {
            ctx->pc = 0x26F738u;
            goto label_26f738;
        }
    }
    ctx->pc = 0x26F67Cu;
    // 0x26f67c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f680: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x26F680u;
    {
        const bool branch_taken_0x26f680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f680) {
            ctx->pc = 0x26F708u;
            goto label_26f708;
        }
    }
    ctx->pc = 0x26F688u;
    // 0x26f688: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26f688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26f68c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26F68Cu;
    {
        const bool branch_taken_0x26f68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f68c) {
            ctx->pc = 0x26F6D8u;
            goto label_26f6d8;
        }
    }
    ctx->pc = 0x26F694u;
    // 0x26f694: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26f694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26f698: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F698u;
    {
        const bool branch_taken_0x26f698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f698) {
            ctx->pc = 0x26F6A8u;
            goto label_26f6a8;
        }
    }
    ctx->pc = 0x26F6A0u;
    // 0x26f6a0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x26F6A0u;
    {
        const bool branch_taken_0x26f6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f6a0) {
            ctx->pc = 0x26F738u;
            goto label_26f738;
        }
    }
    ctx->pc = 0x26F6A8u;
label_26f6a8:
    // 0x26f6a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f6ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26f6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f6b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f6b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f6b8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F6B8u;
    {
        const bool branch_taken_0x26f6b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26f6b8) {
            ctx->pc = 0x26F6CCu;
            goto label_26f6cc;
        }
    }
    ctx->pc = 0x26F6C0u;
    // 0x26f6c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26f6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f6c4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x26F6C4u;
    {
        const bool branch_taken_0x26f6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f6c4) {
            ctx->pc = 0x26F73Cu;
            goto label_26f73c;
        }
    }
    ctx->pc = 0x26F6CCu;
label_26f6cc:
    // 0x26f6cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f6d0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x26f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x26f6d4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x26f6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_26f6d8:
    // 0x26f6d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f6dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26f6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f6e0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f6e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f6e8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F6E8u;
    {
        const bool branch_taken_0x26f6e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26f6e8) {
            ctx->pc = 0x26F6FCu;
            goto label_26f6fc;
        }
    }
    ctx->pc = 0x26F6F0u;
    // 0x26f6f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f6f4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26F6F4u;
    {
        const bool branch_taken_0x26f6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f6f4) {
            ctx->pc = 0x26F73Cu;
            goto label_26f73c;
        }
    }
    ctx->pc = 0x26F6FCu;
label_26f6fc:
    // 0x26f6fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f700: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x26f700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x26f704: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x26f704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_26f708:
    // 0x26f708: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26f708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f70c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26f70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f710: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26f710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f714: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26f714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f718: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F718u;
    {
        const bool branch_taken_0x26f718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26f718) {
            ctx->pc = 0x26F72Cu;
            goto label_26f72c;
        }
    }
    ctx->pc = 0x26F720u;
    // 0x26f720: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26f720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f724: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26F724u;
    {
        const bool branch_taken_0x26f724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f724) {
            ctx->pc = 0x26F73Cu;
            goto label_26f73c;
        }
    }
    ctx->pc = 0x26F72Cu;
label_26f72c:
    // 0x26f72c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f730: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x26f730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x26f734: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x26f734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_26f738:
    // 0x26f738: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x26f738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_26f73c:
    // 0x26f73c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26f73cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f740: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x26f740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26f744: 0x3e00008  jr          $ra
    ctx->pc = 0x26F744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F74Cu;
    // 0x26f74c: 0x0  nop
    ctx->pc = 0x26f74cu;
    // NOP
    ctx->pc = 0x26f750u;
}

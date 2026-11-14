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

// Function: sub_0029B580
// Address: 0x29b580 - 0x29b790
void sub_0029B580_0x29b580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B580_0x29b580");
#endif

    switch (ctx->pc) {
        case 0x29b5c4u: goto label_29b5c4;
        default: break;
    }

    ctx->pc = 0x29b580u;

    // 0x29b580: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29b580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29b584: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b588: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x29b588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29b58c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x29b58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x29b590: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x29b590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x29b594: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x29b594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b598: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29b598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b59c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29b59cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29b5a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x29b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29b5a4: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x29b5a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x29b5a8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B5A8u;
    {
        const bool branch_taken_0x29b5a8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x29b5a8) {
            ctx->pc = 0x29B5B8u;
            goto label_29b5b8;
        }
    }
    ctx->pc = 0x29B5B0u;
    // 0x29b5b0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x29b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x29b5b4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x29b5b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_29b5b8:
    // 0x29b5b8: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x29b5b8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
    // 0x29b5bc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x29B5BCu;
    {
        const bool branch_taken_0x29b5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b5bc) {
            ctx->pc = 0x29B688u;
            goto label_29b688;
        }
    }
    ctx->pc = 0x29B5C4u;
label_29b5c4:
    // 0x29b5c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29b5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b5c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29b5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b5cc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b5d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b5d4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B5D4u;
    {
        const bool branch_taken_0x29b5d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29b5d4) {
            ctx->pc = 0x29B5E8u;
            goto label_29b5e8;
        }
    }
    ctx->pc = 0x29B5DCu;
    // 0x29b5dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b5e0: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x29B5E0u;
    {
        const bool branch_taken_0x29b5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b5e0) {
            ctx->pc = 0x29B77Cu;
            goto label_29b77c;
        }
    }
    ctx->pc = 0x29B5E8u;
label_29b5e8:
    // 0x29b5e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b5ec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29b5f0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x29b5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x29b5f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b5f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29b5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b5fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b600: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29b600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b604: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B604u;
    {
        const bool branch_taken_0x29b604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29b604) {
            ctx->pc = 0x29B618u;
            goto label_29b618;
        }
    }
    ctx->pc = 0x29B60Cu;
    // 0x29b60c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b610: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x29B610u;
    {
        const bool branch_taken_0x29b610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b610) {
            ctx->pc = 0x29B77Cu;
            goto label_29b77c;
        }
    }
    ctx->pc = 0x29B618u;
label_29b618:
    // 0x29b618: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29b618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b61c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29b620: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x29b620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x29b624: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29b624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b628: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29b628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b62c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b630: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29b630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b634: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B634u;
    {
        const bool branch_taken_0x29b634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29b634) {
            ctx->pc = 0x29B648u;
            goto label_29b648;
        }
    }
    ctx->pc = 0x29B63Cu;
    // 0x29b63c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b640: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x29B640u;
    {
        const bool branch_taken_0x29b640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b640) {
            ctx->pc = 0x29B77Cu;
            goto label_29b77c;
        }
    }
    ctx->pc = 0x29B648u;
label_29b648:
    // 0x29b648: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29b648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b64c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29b650: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x29b650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x29b654: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29b654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b658: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29b658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b65c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b660: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29b660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b664: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B664u;
    {
        const bool branch_taken_0x29b664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29b664) {
            ctx->pc = 0x29B678u;
            goto label_29b678;
        }
    }
    ctx->pc = 0x29B66Cu;
    // 0x29b66c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b670: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x29B670u;
    {
        const bool branch_taken_0x29b670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b670) {
            ctx->pc = 0x29B77Cu;
            goto label_29b77c;
        }
    }
    ctx->pc = 0x29B678u;
label_29b678:
    // 0x29b678: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29b678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b67c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29b680: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x29b680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x29b684: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x29b684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_29b688:
    // 0x29b688: 0x1e00ffce  bgtz        $s0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x29B688u;
    {
        const bool branch_taken_0x29b688 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x29b688) {
            ctx->pc = 0x29B5C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b5c4;
        }
    }
    ctx->pc = 0x29B690u;
    // 0x29b690: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x29b690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b694: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29b694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b698: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x29b698u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29b69c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x29b69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29b6a0: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x29b6a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x29b6a4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B6A4u;
    {
        const bool branch_taken_0x29b6a4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x29b6a4) {
            ctx->pc = 0x29B6B4u;
            goto label_29b6b4;
        }
    }
    ctx->pc = 0x29B6ACu;
    // 0x29b6ac: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x29b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x29b6b0: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x29b6b0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_29b6b4:
    // 0x29b6b4: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x29B6B4u;
    {
        const bool branch_taken_0x29b6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b6b4) {
            ctx->pc = 0x29B778u;
            goto label_29b778;
        }
    }
    ctx->pc = 0x29B6BCu;
    // 0x29b6bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b6c0: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x29B6C0u;
    {
        const bool branch_taken_0x29b6c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29b6c0) {
            ctx->pc = 0x29B748u;
            goto label_29b748;
        }
    }
    ctx->pc = 0x29B6C8u;
    // 0x29b6c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29b6cc: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29B6CCu;
    {
        const bool branch_taken_0x29b6cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29b6cc) {
            ctx->pc = 0x29B718u;
            goto label_29b718;
        }
    }
    ctx->pc = 0x29B6D4u;
    // 0x29b6d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29b6d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B6D8u;
    {
        const bool branch_taken_0x29b6d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29b6d8) {
            ctx->pc = 0x29B6E8u;
            goto label_29b6e8;
        }
    }
    ctx->pc = 0x29B6E0u;
    // 0x29b6e0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x29B6E0u;
    {
        const bool branch_taken_0x29b6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b6e0) {
            ctx->pc = 0x29B778u;
            goto label_29b778;
        }
    }
    ctx->pc = 0x29B6E8u;
label_29b6e8:
    // 0x29b6e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b6ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29b6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b6f0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b6f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b6f8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B6F8u;
    {
        const bool branch_taken_0x29b6f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29b6f8) {
            ctx->pc = 0x29B70Cu;
            goto label_29b70c;
        }
    }
    ctx->pc = 0x29B700u;
    // 0x29b700: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29b700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b704: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x29B704u;
    {
        const bool branch_taken_0x29b704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b704) {
            ctx->pc = 0x29B77Cu;
            goto label_29b77c;
        }
    }
    ctx->pc = 0x29B70Cu;
label_29b70c:
    // 0x29b70c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b710: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29b710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29b714: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x29b714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_29b718:
    // 0x29b718: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29b718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b71c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b720: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29b720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b724: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29b724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b728: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B728u;
    {
        const bool branch_taken_0x29b728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29b728) {
            ctx->pc = 0x29B73Cu;
            goto label_29b73c;
        }
    }
    ctx->pc = 0x29B730u;
    // 0x29b730: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29b730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b734: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x29B734u;
    {
        const bool branch_taken_0x29b734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b734) {
            ctx->pc = 0x29B77Cu;
            goto label_29b77c;
        }
    }
    ctx->pc = 0x29B73Cu;
label_29b73c:
    // 0x29b73c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b740: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29b740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29b744: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x29b744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_29b748:
    // 0x29b748: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29b748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b74c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29b74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b750: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x29b750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b754: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29b754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29b758: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B758u;
    {
        const bool branch_taken_0x29b758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29b758) {
            ctx->pc = 0x29B76Cu;
            goto label_29b76c;
        }
    }
    ctx->pc = 0x29B760u;
    // 0x29b760: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29b760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b764: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x29B764u;
    {
        const bool branch_taken_0x29b764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b764) {
            ctx->pc = 0x29B77Cu;
            goto label_29b77c;
        }
    }
    ctx->pc = 0x29B76Cu;
label_29b76c:
    // 0x29b76c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29b76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b770: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x29b770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x29b774: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x29b774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_29b778:
    // 0x29b778: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29b778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_29b77c:
    // 0x29b77c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b77cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b780: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x29b780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29b784: 0x3e00008  jr          $ra
    ctx->pc = 0x29B784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B78Cu;
    // 0x29b78c: 0x0  nop
    ctx->pc = 0x29b78cu;
    // NOP
    ctx->pc = 0x29b790u;
}

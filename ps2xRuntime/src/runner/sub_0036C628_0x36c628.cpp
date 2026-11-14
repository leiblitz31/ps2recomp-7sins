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

// Function: sub_0036C628
// Address: 0x36c628 - 0x36c7f0
void sub_0036C628_0x36c628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C628_0x36c628");
#endif

    switch (ctx->pc) {
        case 0x36c674u: goto label_36c674;
        case 0x36c718u: goto label_36c718;
        default: break;
    }

    ctx->pc = 0x36c628u;

    // 0x36c628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36c628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36c62c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x36c62cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c630: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36c630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36c634: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x36c634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36c638: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x36c638u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36c63c: 0x14e2000f  bne         $a3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x36C63Cu;
    {
        const bool branch_taken_0x36c63c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x36C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C63Cu;
        // 0x36c640: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c63c) {
            ctx->pc = 0x36C67Cu;
            goto label_36c67c;
        }
    }
    ctx->pc = 0x36C644u;
    // 0x36c644: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x36c644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x36c648: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x36c648u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x36c64c: 0x8d070084  lw          $a3, 0x84($t0)
    ctx->pc = 0x36c64cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 132)));
    // 0x36c650: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x36c650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c654: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x36c654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x36c658: 0x8d030088  lw          $v1, 0x88($t0)
    ctx->pc = 0x36c658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 136)));
    // 0x36c65c: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x36c65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x36c660: 0x8d02008c  lw          $v0, 0x8C($t0)
    ctx->pc = 0x36c660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 140)));
    // 0x36c664: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x36c664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x36c668: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x36c668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x36c66c: 0xc0d4c7e  jal         func_3531F8
    ctx->pc = 0x36C66Cu;
    SET_GPR_U32(ctx, 31, 0x36C674u);
    ctx->pc = 0x3531F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3531F8u, 0x36C66Cu, 0x36C674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C674u;
label_36c674:
    // 0x36c674: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x36C674u;
    {
        const bool branch_taken_0x36c674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C674u;
        // 0x36c678: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c674) {
            ctx->pc = 0x36C7E4u;
            goto label_36c7e4;
        }
    }
    ctx->pc = 0x36C67Cu;
label_36c67c:
    // 0x36c67c: 0x18a00058  blez        $a1, . + 4 + (0x58 << 2)
    ctx->pc = 0x36C67Cu;
    {
        const bool branch_taken_0x36c67c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x36C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C67Cu;
        // 0x36c680: 0x51023  negu        $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c67c) {
            ctx->pc = 0x36C7E0u;
            goto label_36c7e0;
        }
    }
    ctx->pc = 0x36C684u;
    // 0x36c684: 0x30460003  andi        $a2, $v0, 0x3
    ctx->pc = 0x36c684u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x36c688: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x36C688u;
    {
        const bool branch_taken_0x36c688 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C688u;
        // 0x36c68c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c688) {
            ctx->pc = 0x36C718u;
            goto label_36c718;
        }
    }
    ctx->pc = 0x36C690u;
    // 0x36c690: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x36c690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36c694: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x36C694u;
    {
        const bool branch_taken_0x36c694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C694u;
        // 0x36c698: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c694) {
            ctx->pc = 0x36C708u;
            goto label_36c708;
        }
    }
    ctx->pc = 0x36C69Cu;
    // 0x36c69c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x36C69Cu;
    {
        const bool branch_taken_0x36c69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C69Cu;
        // 0x36c6a0: 0x8d020080  lw          $v0, 0x80($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c69c) {
            ctx->pc = 0x36C6D8u;
            goto label_36c6d8;
        }
    }
    ctx->pc = 0x36C6A4u;
    // 0x36c6a4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x36c6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x36c6a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36c6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x36c6ac: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36c6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36c6b0: 0x8d020084  lw          $v0, 0x84($t0)
    ctx->pc = 0x36c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 132)));
    // 0x36c6b4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36c6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x36c6b8: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36c6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36c6bc: 0x8d020088  lw          $v0, 0x88($t0)
    ctx->pc = 0x36c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 136)));
    // 0x36c6c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36c6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x36c6c4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x36c6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36c6c8: 0x8d02008c  lw          $v0, 0x8C($t0)
    ctx->pc = 0x36c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 140)));
    // 0x36c6cc: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x36c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x36c6d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x36c6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x36c6d4: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x36c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
label_36c6d8:
    // 0x36c6d8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x36c6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x36c6dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c6e0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c6e4: 0x8d020084  lw          $v0, 0x84($t0)
    ctx->pc = 0x36c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 132)));
    // 0x36c6e8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c6ec: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c6f0: 0x8d020088  lw          $v0, 0x88($t0)
    ctx->pc = 0x36c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 136)));
    // 0x36c6f4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c6f8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c6fc: 0x8d02008c  lw          $v0, 0x8C($t0)
    ctx->pc = 0x36c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 140)));
    // 0x36c700: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c704: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_36c708:
    // 0x36c708: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x36c708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x36c70c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x36C70Cu;
    {
        const bool branch_taken_0x36c70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C70Cu;
        // 0x36c710: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c70c) {
            ctx->pc = 0x36C7B0u;
            goto label_36c7b0;
        }
    }
    ctx->pc = 0x36C714u;
    // 0x36c714: 0x0  nop
    ctx->pc = 0x36c714u;
    // NOP
label_36c718:
    // 0x36c718: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x36c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x36c71c: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x36c71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x36c720: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c724: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c728: 0x8d020084  lw          $v0, 0x84($t0)
    ctx->pc = 0x36c728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 132)));
    // 0x36c72c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c72cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c730: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c734: 0x8d020088  lw          $v0, 0x88($t0)
    ctx->pc = 0x36c734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 136)));
    // 0x36c738: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c73c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c740: 0x8d02008c  lw          $v0, 0x8C($t0)
    ctx->pc = 0x36c740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 140)));
    // 0x36c744: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c744u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c748: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c74c: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x36c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x36c750: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c754: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c758: 0x8d020084  lw          $v0, 0x84($t0)
    ctx->pc = 0x36c758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 132)));
    // 0x36c75c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c75cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c760: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c764: 0x8d020088  lw          $v0, 0x88($t0)
    ctx->pc = 0x36c764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 136)));
    // 0x36c768: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c768u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c76c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c770: 0x8d02008c  lw          $v0, 0x8C($t0)
    ctx->pc = 0x36c770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 140)));
    // 0x36c774: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c778: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c77c: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x36c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x36c780: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c780u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c784: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c788: 0x8d020084  lw          $v0, 0x84($t0)
    ctx->pc = 0x36c788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 132)));
    // 0x36c78c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c78cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c790: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c794: 0x8d020088  lw          $v0, 0x88($t0)
    ctx->pc = 0x36c794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 136)));
    // 0x36c798: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c798u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c79c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c7a0: 0x8d02008c  lw          $v0, 0x8C($t0)
    ctx->pc = 0x36c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 140)));
    // 0x36c7a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c7a8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c7ac: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x36c7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
label_36c7b0:
    // 0x36c7b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c7b4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c7b8: 0x8d020084  lw          $v0, 0x84($t0)
    ctx->pc = 0x36c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 132)));
    // 0x36c7bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c7c0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c7c4: 0x8d020088  lw          $v0, 0x88($t0)
    ctx->pc = 0x36c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 136)));
    // 0x36c7c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c7cc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x36c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x36c7d0: 0x8d02008c  lw          $v0, 0x8C($t0)
    ctx->pc = 0x36c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 140)));
    // 0x36c7d4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x36c7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x36c7d8: 0x14a0ffcf  bnez        $a1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x36C7D8u;
    {
        const bool branch_taken_0x36c7d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C7D8u;
        // 0x36c7dc: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c7d8) {
            ctx->pc = 0x36C718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36c718;
        }
    }
    ctx->pc = 0x36C7E0u;
label_36c7e0:
    // 0x36c7e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36c7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36c7e4:
    // 0x36c7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x36C7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C7E4u;
        // 0x36c7e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C7ECu;
    // 0x36c7ec: 0x0  nop
    ctx->pc = 0x36c7ecu;
    // NOP
    ctx->pc = 0x36c7f0u;
}

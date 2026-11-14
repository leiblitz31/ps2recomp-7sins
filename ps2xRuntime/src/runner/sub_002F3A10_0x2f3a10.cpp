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

// Function: sub_002F3A10
// Address: 0x2f3a10 - 0x2f3a88
void sub_002F3A10_0x2f3a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3A10_0x2f3a10");
#endif

    switch (ctx->pc) {
        case 0x2f3a5cu: goto label_2f3a5c;
        default: break;
    }

    ctx->pc = 0x2f3a10u;

    // 0x2f3a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f3a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f3a14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f3a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f3a18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f3a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3a1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f3a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f3a20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f3a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3a24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f3a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f3a28: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f3a28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3a2c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2f3a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2f3a30: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2f3a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2f3a34: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3A34u;
    {
        const bool branch_taken_0x2f3a34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A34u;
        // 0x2f3a38: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3a34) {
            ctx->pc = 0x2F3A48u;
            goto label_2f3a48;
        }
    }
    ctx->pc = 0x2F3A3Cu;
    // 0x2f3a3c: 0x8c42ea90  lw          $v0, -0x1570($v0)
    ctx->pc = 0x2f3a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961808)));
    // 0x2f3a40: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2f3a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x2f3a44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f3a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3a48:
    // 0x2f3a48: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x2f3a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2f3a4c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3A4Cu;
    {
        const bool branch_taken_0x2f3a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A4Cu;
        // 0x2f3a50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3a4c) {
            ctx->pc = 0x2F3A64u;
            goto label_2f3a64;
        }
    }
    ctx->pc = 0x2F3A54u;
    // 0x2f3a54: 0xc0baf6e  jal         func_2EBDB8
    ctx->pc = 0x2F3A54u;
    SET_GPR_U32(ctx, 31, 0x2F3A5Cu);
    ctx->pc = 0x2EBDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBDB8u, 0x2F3A54u, 0x2F3A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3A5Cu;
label_2f3a5c:
    // 0x2f3a5c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2f3a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2f3a60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f3a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f3a64:
    // 0x2f3a64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f3a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3a68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f3a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3a6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f3a6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f3a70: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2f3a70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3a74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f3a74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3a78: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2f3a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f3a7c: 0x80bcea2  j           func_2F3A88
    ctx->pc = 0x2F3A7Cu;
    ctx->pc = 0x2F3A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3A7Cu;
    // 0x2f3a80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3A88u;
    sub_002F3A88_0x2f3a88(rdram, ctx, runtime); return;
    ctx->pc = 0x2F3A84u;
    // 0x2f3a84: 0x0  nop
    ctx->pc = 0x2f3a84u;
    // NOP
    ctx->pc = 0x2f3a88u;
}

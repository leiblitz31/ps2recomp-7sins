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

// Function: sub_003B4B40
// Address: 0x3b4b40 - 0x3b4bc8
void sub_003B4B40_0x3b4b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4B40_0x3b4b40");
#endif

    switch (ctx->pc) {
        case 0x3b4b7cu: goto label_3b4b7c;
        case 0x3b4b8cu: goto label_3b4b8c;
        case 0x3b4b9cu: goto label_3b4b9c;
        case 0x3b4bacu: goto label_3b4bac;
        default: break;
    }

    ctx->pc = 0x3b4b40u;

    // 0x3b4b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b4b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b4b44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b4b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4b48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b4b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b4b4c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3b4b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b4b50: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x3b4b50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x3b4b54: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3B4B54u;
    {
        const bool branch_taken_0x3b4b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4B54u;
        // 0x3b4b58: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4b54) {
            ctx->pc = 0x3B4BB4u;
            goto label_3b4bb4;
        }
    }
    ctx->pc = 0x3B4B5Cu;
    // 0x3b4b5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b4b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b4b60: 0x2442c0d0  addiu       $v0, $v0, -0x3F30
    ctx->pc = 0x3b4b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951120));
    // 0x3b4b64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3b4b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b4b68: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3b4b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b4b6c: 0x800008  jr          $a0
    ctx->pc = 0x3B4B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B4B74u: goto label_3b4b74;
            case 0x3B4B84u: goto label_3b4b84;
            case 0x3B4B94u: goto label_3b4b94;
            case 0x3B4BA4u: goto label_3b4ba4;
            case 0x3B4BB4u: goto label_3b4bb4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4B6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B4B74u;
label_3b4b74:
    // 0x3b4b74: 0xc0ede8c  jal         func_3B7A30
    ctx->pc = 0x3B4B74u;
    SET_GPR_U32(ctx, 31, 0x3B4B7Cu);
    ctx->pc = 0x3B4B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4B74u;
    // 0x3b4b78: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7A30u, 0x3B4B74u, 0x3B4B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4B7Cu;
label_3b4b7c:
    // 0x3b4b7c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3B4B7Cu;
    {
        const bool branch_taken_0x3b4b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4B7Cu;
        // 0x3b4b80: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4b7c) {
            ctx->pc = 0x3B4BBCu;
            goto label_3b4bbc;
        }
    }
    ctx->pc = 0x3B4B84u;
label_3b4b84:
    // 0x3b4b84: 0xc0ee78c  jal         func_3B9E30
    ctx->pc = 0x3B4B84u;
    SET_GPR_U32(ctx, 31, 0x3B4B8Cu);
    ctx->pc = 0x3B4B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4B84u;
    // 0x3b4b88: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9E30u, 0x3B4B84u, 0x3B4B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4B8Cu;
label_3b4b8c:
    // 0x3b4b8c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3B4B8Cu;
    {
        const bool branch_taken_0x3b4b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4B8Cu;
        // 0x3b4b90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4b8c) {
            ctx->pc = 0x3B4BBCu;
            goto label_3b4bbc;
        }
    }
    ctx->pc = 0x3B4B94u;
label_3b4b94:
    // 0x3b4b94: 0xc0ed4d0  jal         func_3B5340
    ctx->pc = 0x3B4B94u;
    SET_GPR_U32(ctx, 31, 0x3B4B9Cu);
    ctx->pc = 0x3B4B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4B94u;
    // 0x3b4b98: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5340u, 0x3B4B94u, 0x3B4B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4B9Cu;
label_3b4b9c:
    // 0x3b4b9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B4B9Cu;
    {
        const bool branch_taken_0x3b4b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4B9Cu;
        // 0x3b4ba0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4b9c) {
            ctx->pc = 0x3B4BBCu;
            goto label_3b4bbc;
        }
    }
    ctx->pc = 0x3B4BA4u;
label_3b4ba4:
    // 0x3b4ba4: 0xc0ed0a6  jal         func_3B4298
    ctx->pc = 0x3B4BA4u;
    SET_GPR_U32(ctx, 31, 0x3B4BACu);
    ctx->pc = 0x3B4BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4BA4u;
    // 0x3b4ba8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4298u, 0x3B4BA4u, 0x3B4BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4BACu;
label_3b4bac:
    // 0x3b4bac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B4BACu;
    {
        const bool branch_taken_0x3b4bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4BACu;
        // 0x3b4bb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4bac) {
            ctx->pc = 0x3B4BBCu;
            goto label_3b4bbc;
        }
    }
    ctx->pc = 0x3B4BB4u;
label_3b4bb4:
    // 0x3b4bb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b4bb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4bb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b4bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b4bbc:
    // 0x3b4bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4BBCu;
        // 0x3b4bc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4BC4u;
    // 0x3b4bc4: 0x0  nop
    ctx->pc = 0x3b4bc4u;
    // NOP
    ctx->pc = 0x3b4bc8u;
}

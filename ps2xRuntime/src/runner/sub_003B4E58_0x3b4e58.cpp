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

// Function: sub_003B4E58
// Address: 0x3b4e58 - 0x3b4ee0
void sub_003B4E58_0x3b4e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4E58_0x3b4e58");
#endif

    switch (ctx->pc) {
        case 0x3b4e94u: goto label_3b4e94;
        case 0x3b4ea4u: goto label_3b4ea4;
        case 0x3b4eb4u: goto label_3b4eb4;
        case 0x3b4ec4u: goto label_3b4ec4;
        default: break;
    }

    ctx->pc = 0x3b4e58u;

    // 0x3b4e58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b4e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b4e5c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3b4e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4e60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b4e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b4e64: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3b4e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3b4e68: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x3b4e68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x3b4e6c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3B4E6Cu;
    {
        const bool branch_taken_0x3b4e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E6Cu;
        // 0x3b4e70: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4e6c) {
            ctx->pc = 0x3B4ECCu;
            goto label_3b4ecc;
        }
    }
    ctx->pc = 0x3B4E74u;
    // 0x3b4e74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b4e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b4e78: 0x2442c110  addiu       $v0, $v0, -0x3EF0
    ctx->pc = 0x3b4e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951184));
    // 0x3b4e7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3b4e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b4e80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3b4e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b4e84: 0x800008  jr          $a0
    ctx->pc = 0x3B4E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B4E8Cu: goto label_3b4e8c;
            case 0x3B4E9Cu: goto label_3b4e9c;
            case 0x3B4EACu: goto label_3b4eac;
            case 0x3B4EBCu: goto label_3b4ebc;
            case 0x3B4ECCu: goto label_3b4ecc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4E84u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B4E8Cu;
label_3b4e8c:
    // 0x3b4e8c: 0xc0ed87e  jal         func_3B61F8
    ctx->pc = 0x3B4E8Cu;
    SET_GPR_U32(ctx, 31, 0x3B4E94u);
    ctx->pc = 0x3B4E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4E8Cu;
    // 0x3b4e90: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B61F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B61F8u, 0x3B4E8Cu, 0x3B4E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4E94u;
label_3b4e94:
    // 0x3b4e94: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3B4E94u;
    {
        const bool branch_taken_0x3b4e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4E94u;
        // 0x3b4e98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4e94) {
            ctx->pc = 0x3B4ED4u;
            goto label_3b4ed4;
        }
    }
    ctx->pc = 0x3B4E9Cu;
label_3b4e9c:
    // 0x3b4e9c: 0xc0ee3a0  jal         func_3B8E80
    ctx->pc = 0x3B4E9Cu;
    SET_GPR_U32(ctx, 31, 0x3B4EA4u);
    ctx->pc = 0x3B4EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4E9Cu;
    // 0x3b4ea0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8E80u, 0x3B4E9Cu, 0x3B4EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4EA4u;
label_3b4ea4:
    // 0x3b4ea4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3B4EA4u;
    {
        const bool branch_taken_0x3b4ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4EA4u;
        // 0x3b4ea8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4ea4) {
            ctx->pc = 0x3B4ED4u;
            goto label_3b4ed4;
        }
    }
    ctx->pc = 0x3B4EACu;
label_3b4eac:
    // 0x3b4eac: 0xc0ed506  jal         func_3B5418
    ctx->pc = 0x3B4EACu;
    SET_GPR_U32(ctx, 31, 0x3B4EB4u);
    ctx->pc = 0x3B4EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4EACu;
    // 0x3b4eb0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5418u, 0x3B4EACu, 0x3B4EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4EB4u;
label_3b4eb4:
    // 0x3b4eb4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B4EB4u;
    {
        const bool branch_taken_0x3b4eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4EB4u;
        // 0x3b4eb8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4eb4) {
            ctx->pc = 0x3B4ED4u;
            goto label_3b4ed4;
        }
    }
    ctx->pc = 0x3B4EBCu;
label_3b4ebc:
    // 0x3b4ebc: 0xc0ecf04  jal         func_3B3C10
    ctx->pc = 0x3B4EBCu;
    SET_GPR_U32(ctx, 31, 0x3B4EC4u);
    ctx->pc = 0x3B4EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4EBCu;
    // 0x3b4ec0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3C10u, 0x3B4EBCu, 0x3B4EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4EC4u;
label_3b4ec4:
    // 0x3b4ec4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B4EC4u;
    {
        const bool branch_taken_0x3b4ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4EC4u;
        // 0x3b4ec8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4ec4) {
            ctx->pc = 0x3B4ED4u;
            goto label_3b4ed4;
        }
    }
    ctx->pc = 0x3B4ECCu;
label_3b4ecc:
    // 0x3b4ecc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b4eccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4ed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b4ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b4ed4:
    // 0x3b4ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4ED4u;
        // 0x3b4ed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4EDCu;
    // 0x3b4edc: 0x0  nop
    ctx->pc = 0x3b4edcu;
    // NOP
    ctx->pc = 0x3b4ee0u;
}

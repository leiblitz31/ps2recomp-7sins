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

// Function: sub_0038D8B8
// Address: 0x38d8b8 - 0x38d918
void sub_0038D8B8_0x38d8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D8B8_0x38d8b8");
#endif

    switch (ctx->pc) {
        case 0x38d8b8u: goto label_38d8b8;
        case 0x38d8bcu: goto label_38d8bc;
        case 0x38d8c0u: goto label_38d8c0;
        case 0x38d8c4u: goto label_38d8c4;
        case 0x38d8c8u: goto label_38d8c8;
        case 0x38d8ccu: goto label_38d8cc;
        case 0x38d8d0u: goto label_38d8d0;
        case 0x38d8d4u: goto label_38d8d4;
        case 0x38d8d8u: goto label_38d8d8;
        case 0x38d8dcu: goto label_38d8dc;
        case 0x38d8e0u: goto label_38d8e0;
        case 0x38d8e4u: goto label_38d8e4;
        case 0x38d8e8u: goto label_38d8e8;
        case 0x38d8ecu: goto label_38d8ec;
        case 0x38d8f0u: goto label_38d8f0;
        case 0x38d8f4u: goto label_38d8f4;
        case 0x38d8f8u: goto label_38d8f8;
        case 0x38d8fcu: goto label_38d8fc;
        case 0x38d900u: goto label_38d900;
        case 0x38d904u: goto label_38d904;
        case 0x38d908u: goto label_38d908;
        case 0x38d90cu: goto label_38d90c;
        case 0x38d910u: goto label_38d910;
        case 0x38d914u: goto label_38d914;
        default: break;
    }

    ctx->pc = 0x38d8b8u;

label_38d8b8:
    // 0x38d8b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38d8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38d8bc:
    // 0x38d8bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38d8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_38d8c0:
    // 0x38d8c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38d8c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38d8c4:
    // 0x38d8c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38d8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38d8c8:
    // 0x38d8c8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38d8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_38d8cc:
    // 0x38d8cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38d8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38d8d0:
    // 0x38d8d0: 0xc104ca6  jal         func_413298
label_38d8d4:
    if (ctx->pc == 0x38D8D4u) {
        ctx->pc = 0x38D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D8D0u;
        // 0x38d8d4: 0x2484ade8  addiu       $a0, $a0, -0x5218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D8D8u;
        goto label_38d8d8;
    }
    ctx->pc = 0x38D8D0u;
    SET_GPR_U32(ctx, 31, 0x38D8D8u);
    ctx->pc = 0x38D8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D8D0u;
    // 0x38d8d4: 0x2484ade8  addiu       $a0, $a0, -0x5218 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x38D8D0u, 0x38D8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D8D8u;
label_38d8d8:
    // 0x38d8d8: 0xc1083c6  jal         func_420F18
label_38d8dc:
    if (ctx->pc == 0x38D8DCu) {
        ctx->pc = 0x38D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D8D8u;
        // 0x38d8dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D8E0u;
        goto label_38d8e0;
    }
    ctx->pc = 0x38D8D8u;
    SET_GPR_U32(ctx, 31, 0x38D8E0u);
    ctx->pc = 0x38D8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D8D8u;
    // 0x38d8dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420F18u, 0x38D8D8u, 0x38D8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D8E0u;
label_38d8e0:
    // 0x38d8e0: 0x8f86bd38  lw          $a2, -0x42C8($gp)
    ctx->pc = 0x38d8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950200)));
label_38d8e4:
    // 0x38d8e4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x38d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_38d8e8:
    // 0x38d8e8: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x38d8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_38d8ec:
    // 0x38d8ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38d8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38d8f0:
    // 0x38d8f0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x38d8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_38d8f4:
    // 0x38d8f4: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x38d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_38d8f8:
    // 0x38d8f8: 0x40f809  jalr        $v0
label_38d8fc:
    if (ctx->pc == 0x38D8FCu) {
        ctx->pc = 0x38D8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D8F8u;
        // 0x38d8fc: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D900u;
        goto label_38d900;
    }
    ctx->pc = 0x38D8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38D900u);
        ctx->pc = 0x38D8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D8F8u;
        // 0x38d8fc: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D8F8u, 0x38D900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38D900u;
label_38d900:
    // 0x38d900: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38d900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38d904:
    // 0x38d904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38d904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38d908:
    // 0x38d908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38d908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38d90c:
    // 0x38d90c: 0x3e00008  jr          $ra
label_38d910:
    if (ctx->pc == 0x38D910u) {
        ctx->pc = 0x38D910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D90Cu;
        // 0x38d910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38D914u;
        goto label_38d914;
    }
    ctx->pc = 0x38D90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D90Cu;
        // 0x38d910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D914u;
label_38d914:
    // 0x38d914: 0x0  nop
    ctx->pc = 0x38d914u;
    // NOP
    ctx->pc = 0x38d918u;
}

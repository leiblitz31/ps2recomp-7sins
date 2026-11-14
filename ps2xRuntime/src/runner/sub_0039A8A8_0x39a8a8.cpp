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

// Function: sub_0039A8A8
// Address: 0x39a8a8 - 0x39a960
void sub_0039A8A8_0x39a8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A8A8_0x39a8a8");
#endif

    switch (ctx->pc) {
        case 0x39a8d4u: goto label_39a8d4;
        case 0x39a8fcu: goto label_39a8fc;
        case 0x39a924u: goto label_39a924;
        case 0x39a948u: goto label_39a948;
        default: break;
    }

    ctx->pc = 0x39a8a8u;

    // 0x39a8a8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x39a8a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a8ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39a8acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39a8b0: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x39a8b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a8b4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x39a8b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a8b8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x39a8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a8bc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x39a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x39a8c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39a8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39a8c4: 0x2444ae58  addiu       $a0, $v0, -0x51A8
    ctx->pc = 0x39a8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946392));
    // 0x39a8c8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x39a8c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a8cc: 0xc104a46  jal         func_412918
    ctx->pc = 0x39A8CCu;
    SET_GPR_U32(ctx, 31, 0x39A8D4u);
    ctx->pc = 0x39A8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A8CCu;
    // 0x39a8d0: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412918u, 0x39A8CCu, 0x39A8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A8D4u;
label_39a8d4:
    // 0x39a8d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39a8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x39A8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A8D8u;
        // 0x39a8dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A8E0u;
    // 0x39a8e0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x39a8e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a8e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39a8e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39a8e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x39a8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a8ec: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x39a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x39a8f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39a8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39a8f4: 0xc104a56  jal         func_412958
    ctx->pc = 0x39A8F4u;
    SET_GPR_U32(ctx, 31, 0x39A8FCu);
    ctx->pc = 0x39A8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A8F4u;
    // 0x39a8f8: 0x2444ae58  addiu       $a0, $v0, -0x51A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412958u, 0x39A8F4u, 0x39A8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A8FCu;
label_39a8fc:
    // 0x39a8fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39a8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a900: 0x3e00008  jr          $ra
    ctx->pc = 0x39A900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A900u;
        // 0x39a904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A908u;
    // 0x39a908: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x39a908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a90c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39a90cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39a910: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x39a910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a914: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x39a914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x39a918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39a918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39a91c: 0xc104a64  jal         func_412990
    ctx->pc = 0x39A91Cu;
    SET_GPR_U32(ctx, 31, 0x39A924u);
    ctx->pc = 0x39A920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A91Cu;
    // 0x39a920: 0x2444ae58  addiu       $a0, $v0, -0x51A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412990u, 0x39A91Cu, 0x39A924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A924u;
label_39a924:
    // 0x39a924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39a924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a928: 0x3e00008  jr          $ra
    ctx->pc = 0x39A928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A928u;
        // 0x39a92c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A930u;
    // 0x39a930: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x39a930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a934: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39a934u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39a938: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x39a938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x39a93c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39a93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39a940: 0xc104c74  jal         func_4131D0
    ctx->pc = 0x39A940u;
    SET_GPR_U32(ctx, 31, 0x39A948u);
    ctx->pc = 0x39A944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A940u;
    // 0x39a944: 0x2484ae58  addiu       $a0, $a0, -0x51A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4131D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4131D0u, 0x39A940u, 0x39A948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A948u;
label_39a948:
    // 0x39a948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39a948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a94c: 0x3e00008  jr          $ra
    ctx->pc = 0x39A94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A94Cu;
        // 0x39a950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A954u;
    // 0x39a954: 0x0  nop
    ctx->pc = 0x39a954u;
    // NOP
    // 0x39a958: 0x3e00008  jr          $ra
    ctx->pc = 0x39A958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A958u;
        // 0x39a95c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A960u;
}

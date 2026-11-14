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

// Function: sub_0032A848
// Address: 0x32a848 - 0x32a928
void sub_0032A848_0x32a848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A848_0x32a848");
#endif

    switch (ctx->pc) {
        case 0x32a86cu: goto label_32a86c;
        case 0x32a894u: goto label_32a894;
        case 0x32a8b0u: goto label_32a8b0;
        case 0x32a8c8u: goto label_32a8c8;
        case 0x32a8e0u: goto label_32a8e0;
        case 0x32a8f0u: goto label_32a8f0;
        case 0x32a900u: goto label_32a900;
        case 0x32a910u: goto label_32a910;
        default: break;
    }

    ctx->pc = 0x32a848u;

    // 0x32a848: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32a848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32a84c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32a84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32a850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32a850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a854: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32a854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32a858: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x32a858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x32a85c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32a85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32a860: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32a860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a864: 0xc0cab8e  jal         func_32AE38
    ctx->pc = 0x32A864u;
    SET_GPR_U32(ctx, 31, 0x32A86Cu);
    ctx->pc = 0x32A868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A864u;
    // 0x32a868: 0x24842374  addiu       $a0, $a0, 0x2374 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9076));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AE38u, 0x32A864u, 0x32A86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A86Cu;
label_32a86c:
    // 0x32a86c: 0x3c11004f  lui         $s1, 0x4F
    ctx->pc = 0x32a86cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)79 << 16));
    // 0x32a870: 0x26222368  addiu       $v0, $s1, 0x2368
    ctx->pc = 0x32a870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 9064));
    // 0x32a874: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x32a874u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x32a878: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x32a878u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x32a87c: 0xac50001c  sw          $s0, 0x1C($v0)
    ctx->pc = 0x32a87cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x4F2384u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4F2384u, _value); } while (0);
    // 0x32a880: 0x24c6a9b0  addiu       $a2, $a2, -0x5650
    ctx->pc = 0x32a880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945200));
    // 0x32a884: 0x24e7aa00  addiu       $a3, $a3, -0x5600
    ctx->pc = 0x32a884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945280));
    // 0x32a888: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32a888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a88c: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x32A88Cu;
    SET_GPR_U32(ctx, 31, 0x32A894u);
    ctx->pc = 0x32A890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A88Cu;
    // 0x32a890: 0x24050131  addiu       $a1, $zero, 0x131 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x32A88Cu, 0x32A894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A894u;
label_32a894:
    // 0x32a894: 0xae222368  sw          $v0, 0x2368($s1)
    ctx->pc = 0x32a894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 9064), GPR_U32(ctx, 2));
    // 0x32a898: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32a898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a89c: 0x24050131  addiu       $a1, $zero, 0x131
    ctx->pc = 0x32a89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x32a8a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32a8a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a8a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32a8a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a8a8: 0xc0e39f6  jal         func_38E7D8
    ctx->pc = 0x32A8A8u;
    SET_GPR_U32(ctx, 31, 0x32A8B0u);
    ctx->pc = 0x32A8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A8A8u;
    // 0x32a8ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E7D8u, 0x32A8A8u, 0x32A8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A8B0u;
label_32a8b0:
    // 0x32a8b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32a8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a8b4: 0x24050131  addiu       $a1, $zero, 0x131
    ctx->pc = 0x32a8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x32a8b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32a8b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a8bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32a8bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a8c0: 0xc0e28ec  jal         func_38A3B0
    ctx->pc = 0x32A8C0u;
    SET_GPR_U32(ctx, 31, 0x32A8C8u);
    ctx->pc = 0x32A8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A8C0u;
    // 0x32a8c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3B0u, 0x32A8C0u, 0x32A8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A8C8u;
label_32a8c8:
    // 0x32a8c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32a8c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a8cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32a8ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a8d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32a8d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a8d4: 0x24050131  addiu       $a1, $zero, 0x131
    ctx->pc = 0x32a8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x32a8d8: 0xc0e63a2  jal         func_398E88
    ctx->pc = 0x32A8D8u;
    SET_GPR_U32(ctx, 31, 0x32A8E0u);
    ctx->pc = 0x32A8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A8D8u;
    // 0x32a8dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398E88u, 0x32A8D8u, 0x32A8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A8E0u;
label_32a8e0:
    // 0x32a8e0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32a8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x32a8e4: 0x24040131  addiu       $a0, $zero, 0x131
    ctx->pc = 0x32a8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x32a8e8: 0xc0e3a24  jal         func_38E890
    ctx->pc = 0x32A8E8u;
    SET_GPR_U32(ctx, 31, 0x32A8F0u);
    ctx->pc = 0x32A8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A8E8u;
    // 0x32a8ec: 0x24a5aa48  addiu       $a1, $a1, -0x55B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E890u, 0x32A8E8u, 0x32A8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A8F0u;
label_32a8f0:
    // 0x32a8f0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32a8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x32a8f4: 0x24040131  addiu       $a0, $zero, 0x131
    ctx->pc = 0x32a8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x32a8f8: 0xc0e2928  jal         func_38A4A0
    ctx->pc = 0x32A8F8u;
    SET_GPR_U32(ctx, 31, 0x32A900u);
    ctx->pc = 0x32A8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A8F8u;
    // 0x32a8fc: 0x24a5aa78  addiu       $a1, $a1, -0x5588 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A4A0u, 0x32A8F8u, 0x32A900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A900u;
label_32a900:
    // 0x32a900: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x32a900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x32a904: 0x24040131  addiu       $a0, $zero, 0x131
    ctx->pc = 0x32a904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x32a908: 0xc0e63cc  jal         func_398F30
    ctx->pc = 0x32A908u;
    SET_GPR_U32(ctx, 31, 0x32A910u);
    ctx->pc = 0x32A90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A908u;
    // 0x32a90c: 0x24a5aaa8  addiu       $a1, $a1, -0x5558 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398F30u, 0x32A908u, 0x32A910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A910u;
label_32a910:
    // 0x32a910: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32a910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32a914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a918: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32a918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a91c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a920: 0x3e00008  jr          $ra
    ctx->pc = 0x32A920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A920u;
        // 0x32a924: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A928u;
}

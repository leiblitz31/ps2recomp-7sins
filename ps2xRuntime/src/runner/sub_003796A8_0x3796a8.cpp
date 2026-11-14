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

// Function: sub_003796A8
// Address: 0x3796a8 - 0x3797b0
void sub_003796A8_0x3796a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003796A8_0x3796a8");
#endif

    switch (ctx->pc) {
        case 0x3796d0u: goto label_3796d0;
        case 0x379700u: goto label_379700;
        case 0x379724u: goto label_379724;
        case 0x379734u: goto label_379734;
        case 0x379744u: goto label_379744;
        case 0x379768u: goto label_379768;
        case 0x37978cu: goto label_37978c;
        default: break;
    }

    ctx->pc = 0x3796a8u;

    // 0x3796a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3796a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3796ac: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x3796acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x3796b0: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x3796b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x3796b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3796b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3796b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3796b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3796bc: 0x24c69a00  addiu       $a2, $a2, -0x6600
    ctx->pc = 0x3796bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941184));
    // 0x3796c0: 0x24e79af0  addiu       $a3, $a3, -0x6510
    ctx->pc = 0x3796c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941424));
    // 0x3796c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3796c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3796c8: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x3796C8u;
    SET_GPR_U32(ctx, 31, 0x3796D0u);
    ctx->pc = 0x3796CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3796C8u;
    // 0x3796cc: 0x24050116  addiu       $a1, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x3796C8u, 0x3796D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3796D0u;
label_3796d0:
    // 0x3796d0: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x3796d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x3796d4: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x3796d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x3796d8: 0xae02ac48  sw          $v0, -0x53B8($s0)
    ctx->pc = 0x3796d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5DAC48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DAC48u, _value); } while (0);
    // 0x3796dc: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x3796dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x3796e0: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x3796e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x3796e4: 0x2610ac48  addiu       $s0, $s0, -0x53B8
    ctx->pc = 0x3796e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945864));
    // 0x3796e8: 0x25089c28  addiu       $t0, $t0, -0x63D8
    ctx->pc = 0x3796e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941736));
    // 0x3796ec: 0x24c69bf0  addiu       $a2, $a2, -0x6410
    ctx->pc = 0x3796ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941680));
    // 0x3796f0: 0x24e79c08  addiu       $a3, $a3, -0x63F8
    ctx->pc = 0x3796f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941704));
    // 0x3796f4: 0x24050116  addiu       $a1, $zero, 0x116
    ctx->pc = 0x3796f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x3796f8: 0xc0e28ec  jal         func_38A3B0
    ctx->pc = 0x3796F8u;
    SET_GPR_U32(ctx, 31, 0x379700u);
    ctx->pc = 0x3796FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3796F8u;
    // 0x3796fc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3B0u, 0x3796F8u, 0x379700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379700u;
label_379700:
    // 0x379700: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x379700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x379704: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x379704u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x379708: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x379708u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x37970c: 0x24c69e48  addiu       $a2, $a2, -0x61B8
    ctx->pc = 0x37970cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942280));
    // 0x379710: 0x24e79e50  addiu       $a3, $a3, -0x61B0
    ctx->pc = 0x379710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942288));
    // 0x379714: 0x24a592c8  addiu       $a1, $a1, -0x6D38
    ctx->pc = 0x379714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939336));
    // 0x379718: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x379718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x37971c: 0xc0e2910  jal         func_38A440
    ctx->pc = 0x37971Cu;
    SET_GPR_U32(ctx, 31, 0x379724u);
    ctx->pc = 0x379720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37971Cu;
    // 0x379720: 0x24040116  addiu       $a0, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A440u, 0x37971Cu, 0x379724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379724u;
label_379724:
    // 0x379724: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x379724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x379728: 0x24040116  addiu       $a0, $zero, 0x116
    ctx->pc = 0x379728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x37972c: 0xc0e291e  jal         func_38A478
    ctx->pc = 0x37972Cu;
    SET_GPR_U32(ctx, 31, 0x379734u);
    ctx->pc = 0x379730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37972Cu;
    // 0x379730: 0x24a59c48  addiu       $a1, $a1, -0x63B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A478u, 0x37972Cu, 0x379734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379734u;
label_379734:
    // 0x379734: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x379734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x379738: 0x24040116  addiu       $a0, $zero, 0x116
    ctx->pc = 0x379738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x37973c: 0xc0e2928  jal         func_38A4A0
    ctx->pc = 0x37973Cu;
    SET_GPR_U32(ctx, 31, 0x379744u);
    ctx->pc = 0x379740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37973Cu;
    // 0x379740: 0x24a59d18  addiu       $a1, $a1, -0x62E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A4A0u, 0x37973Cu, 0x379744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379744u;
label_379744:
    // 0x379744: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x379744u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x379748: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x379748u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x37974c: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x37974cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x379750: 0x24c69b60  addiu       $a2, $a2, -0x64A0
    ctx->pc = 0x379750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941536));
    // 0x379754: 0x24e79b78  addiu       $a3, $a3, -0x6488
    ctx->pc = 0x379754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941560));
    // 0x379758: 0x25089be8  addiu       $t0, $t0, -0x6418
    ctx->pc = 0x379758u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941672));
    // 0x37975c: 0x24050116  addiu       $a1, $zero, 0x116
    ctx->pc = 0x37975cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x379760: 0xc0e344a  jal         func_38D128
    ctx->pc = 0x379760u;
    SET_GPR_U32(ctx, 31, 0x379768u);
    ctx->pc = 0x379764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379760u;
    // 0x379764: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D128u, 0x379760u, 0x379768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379768u;
label_379768:
    // 0x379768: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x379768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x37976c: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x37976cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x379770: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x379770u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x379774: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x379774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x379778: 0x24a59180  addiu       $a1, $a1, -0x6E80
    ctx->pc = 0x379778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939008));
    // 0x37977c: 0x24c69050  addiu       $a2, $a2, -0x6FB0
    ctx->pc = 0x37977cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938704));
    // 0x379780: 0x24e79db8  addiu       $a3, $a3, -0x6248
    ctx->pc = 0x379780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942136));
    // 0x379784: 0xc0e345c  jal         func_38D170
    ctx->pc = 0x379784u;
    SET_GPR_U32(ctx, 31, 0x37978Cu);
    ctx->pc = 0x379788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379784u;
    // 0x379788: 0x24040116  addiu       $a0, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D170u, 0x379784u, 0x37978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37978Cu;
label_37978c:
    // 0x37978c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37978cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x379790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379798: 0x3e00008  jr          $ra
    ctx->pc = 0x379798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37979Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379798u;
        // 0x37979c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3797A0u;
    // 0x3797a0: 0xaf84a8ac  sw          $a0, -0x5754($gp)
    ctx->pc = 0x3797a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944940), GPR_U32(ctx, 4));
    // 0x3797a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3797A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3797A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3797A4u;
        // 0x3797a8: 0xaf85a8b0  sw          $a1, -0x5750($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944944), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3797A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3797ACu;
    // 0x3797ac: 0x0  nop
    ctx->pc = 0x3797acu;
    // NOP
    ctx->pc = 0x3797b0u;
}

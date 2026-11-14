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

// Function: sub_003D9780
// Address: 0x3d9780 - 0x3d9828
void sub_003D9780_0x3d9780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9780_0x3d9780");
#endif

    switch (ctx->pc) {
        case 0x3d97c0u: goto label_3d97c0;
        default: break;
    }

    ctx->pc = 0x3d9780u;

    // 0x3d9780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d9780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d9784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d9784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9788: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d9788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3d978c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d978cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d9790: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d9790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9794: 0x8e060054  lw          $a2, 0x54($s0)
    ctx->pc = 0x3d9794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3d9798: 0x9e03002c  lwu         $v1, 0x2C($s0)
    ctx->pc = 0x3d9798u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3d979c: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x3d979cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3d97a0: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x3d97a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3d97a4: 0x31878  dsll        $v1, $v1, 1
    ctx->pc = 0x3d97a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 1);
    // 0x3d97a8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3d97a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3d97ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d97acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3d97b0: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x3d97b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x3d97b4: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x3d97b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3d97b8: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3D97B8u;
    SET_GPR_U32(ctx, 31, 0x3D97C0u);
    ctx->pc = 0x3D97BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D97B8u;
    // 0x3d97bc: 0xa440fffe  sh          $zero, -0x2($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967294), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3D97B8u, 0x3D97C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D97C0u;
label_3d97c0:
    // 0x3d97c0: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x3d97c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x3d97c4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3d97c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3d97c8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3d97c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3d97cc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3d97ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d97d0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x3d97d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3d97d4: 0x2442c7d0  addiu       $v0, $v0, -0x3830
    ctx->pc = 0x3d97d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952912));
    // 0x3d97d8: 0xae070070  sw          $a3, 0x70($s0)
    ctx->pc = 0x3d97d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 7));
    // 0x3d97dc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x3d97dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x3d97e0: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x3d97e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x3d97e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d97e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d97e8: 0xfe000068  sd          $zero, 0x68($s0)
    ctx->pc = 0x3d97e8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 0));
    // 0x3d97ec: 0x94660006  lhu         $a2, 0x6($v1)
    ctx->pc = 0x3d97ecu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x3d97f0: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x3d97f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3d97f4: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x3d97f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d97f8: 0x94650004  lhu         $a1, 0x4($v1)
    ctx->pc = 0x3d97f8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3d97fc: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x3d97fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x3d9800: 0xae04009c  sw          $a0, 0x9C($s0)
    ctx->pc = 0x3d9800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 4));
    // 0x3d9804: 0xae0500a0  sw          $a1, 0xA0($s0)
    ctx->pc = 0x3d9804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 5));
    // 0x3d9808: 0xae06008c  sw          $a2, 0x8C($s0)
    ctx->pc = 0x3d9808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 6));
    // 0x3d980c: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x3d980cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x3d9810: 0xae070088  sw          $a3, 0x88($s0)
    ctx->pc = 0x3d9810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 7));
    // 0x3d9814: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x3d9814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x3d9818: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d9818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d981c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d981cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9820: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9820u;
        // 0x3d9824: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9828u;
}

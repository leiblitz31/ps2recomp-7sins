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

// Function: sub_003B44F0
// Address: 0x3b44f0 - 0x3b4600
void sub_003B44F0_0x3b44f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B44F0_0x3b44f0");
#endif

    switch (ctx->pc) {
        case 0x3b45d8u: goto label_3b45d8;
        default: break;
    }

    ctx->pc = 0x3b44f0u;

    // 0x3b44f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b44f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b44f4: 0x2402029a  addiu       $v0, $zero, 0x29A
    ctx->pc = 0x3b44f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
    // 0x3b44f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b44f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b44fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b44fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b4500: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b4500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4504: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3b4504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3b4508: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x3b4508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x3b450c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x3b450cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3b4510: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b4510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3b4514: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b4514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b4518: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x3b4518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x3b451c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b451cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b4520: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x3b4520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x3b4524: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x3b4524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x3b4528: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x3b4528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x3b452c: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x3b452cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x3b4530: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x3b4530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x3b4534: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3b4534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3b4538: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x3b4538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x3b453c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x3b453cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x3b4540: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x3b4540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x3b4544: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3b4544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3b4548: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x3b4548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x3b454c: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x3b454cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x3b4550: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3b4550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3b4554: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x3b4554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x3b4558: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x3b4558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x3b455c: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x3b455cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x3b4560: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x3b4560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x3b4564: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x3b4564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x3b4568: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x3b4568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x3b456c: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x3b456cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x3b4570: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x3b4570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x3b4574: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x3b4574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3b4578: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x3b4578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x3b457c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x3b457cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x3b4580: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x3b4580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x3b4584: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x3b4584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x3b4588: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x3b4588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x3b458c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b458cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b4590: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x3b4590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x3b4594: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x3b4594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x3b4598: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x3b4598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x3b459c: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x3b459cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x3b45a0: 0xe6010090  swc1        $f1, 0x90($s0)
    ctx->pc = 0x3b45a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x3b45a4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3b45a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3b45a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b45a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b45ac: 0xe601009c  swc1        $f1, 0x9C($s0)
    ctx->pc = 0x3b45acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x3b45b0: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x3b45b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x3b45b4: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x3b45b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x3b45b8: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x3b45b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3b45bc: 0xe6010094  swc1        $f1, 0x94($s0)
    ctx->pc = 0x3b45bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x3b45c0: 0xe6010098  swc1        $f1, 0x98($s0)
    ctx->pc = 0x3b45c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x3b45c4: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x3b45c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x3b45c8: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x3b45c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x3b45cc: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x3b45ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x3b45d0: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3B45D0u;
    SET_GPR_U32(ctx, 31, 0x3B45D8u);
    ctx->pc = 0x3B45D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B45D0u;
    // 0x3b45d4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3B45D0u, 0x3B45D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B45D8u;
label_3b45d8:
    // 0x3b45d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b45d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b45dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b45dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b45e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b45e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b45e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B45E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B45E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B45E4u;
        // 0x3b45e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B45E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B45ECu;
    // 0x3b45ec: 0x0  nop
    ctx->pc = 0x3b45ecu;
    // NOP
    // 0x3b45f0: 0xaf84ab44  sw          $a0, -0x54BC($gp)
    ctx->pc = 0x3b45f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945604), GPR_U32(ctx, 4));
    // 0x3b45f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B45F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B45F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B45F4u;
        // 0x3b45f8: 0xaf85ab48  sw          $a1, -0x54B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945608), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B45F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B45FCu;
    // 0x3b45fc: 0x0  nop
    ctx->pc = 0x3b45fcu;
    // NOP
    ctx->pc = 0x3b4600u;
}

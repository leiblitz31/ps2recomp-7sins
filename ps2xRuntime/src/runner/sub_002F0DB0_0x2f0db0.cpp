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

// Function: sub_002F0DB0
// Address: 0x2f0db0 - 0x2f0e60
void sub_002F0DB0_0x2f0db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0DB0_0x2f0db0");
#endif

    switch (ctx->pc) {
        case 0x2f0dc8u: goto label_2f0dc8;
        case 0x2f0e40u: goto label_2f0e40;
        default: break;
    }

    ctx->pc = 0x2f0db0u;

    // 0x2f0db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f0db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f0db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f0db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f0db8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f0db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0dbc: 0x80bf8cc  j           func_2FE330
    ctx->pc = 0x2F0DBCu;
    ctx->pc = 0x2F0DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0DBCu;
    // 0x2f0dc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE330u, 0x2F0DBCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2F0DC4u;
    // 0x2f0dc4: 0x0  nop
    ctx->pc = 0x2f0dc4u;
    // NOP
label_2f0dc8:
    // 0x2f0dc8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2f0dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2f0dcc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2f0dccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0dd0: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2f0dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2f0dd4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2f0dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0dd8: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x2f0dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2f0ddc: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x2f0ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x2f0de0: 0x10100a  movz        $v0, $zero, $s0
    ctx->pc = 0x2f0de0u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2f0de4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2f0de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0de8: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2f0de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f0dec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f0decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0df0: 0x24070208  addiu       $a3, $zero, 0x208
    ctx->pc = 0x2f0df0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x2f0df4: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2f0df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2f0df8: 0xffa80090  sd          $t0, 0x90($sp)
    ctx->pc = 0x2f0df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 8));
    // 0x2f0dfc: 0xffa90098  sd          $t1, 0x98($sp)
    ctx->pc = 0x2f0dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 9));
    // 0x2f0e00: 0xffaa00a0  sd          $t2, 0xA0($sp)
    ctx->pc = 0x2f0e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 10));
    // 0x2f0e04: 0xffab00a8  sd          $t3, 0xA8($sp)
    ctx->pc = 0x2f0e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 11));
    // 0x2f0e08: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x2f0e08u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2f0e0c: 0xe7ad0074  swc1        $f13, 0x74($sp)
    ctx->pc = 0x2f0e0cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2f0e10: 0xe7ae0078  swc1        $f14, 0x78($sp)
    ctx->pc = 0x2f0e10u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2f0e14: 0xe7af007c  swc1        $f15, 0x7C($sp)
    ctx->pc = 0x2f0e14u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2f0e18: 0xe7b00080  swc1        $f16, 0x80($sp)
    ctx->pc = 0x2f0e18u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2f0e1c: 0xe7b10084  swc1        $f17, 0x84($sp)
    ctx->pc = 0x2f0e1cu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2f0e20: 0xe7b20088  swc1        $f18, 0x88($sp)
    ctx->pc = 0x2f0e20u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2f0e24: 0xe7b3008c  swc1        $f19, 0x8C($sp)
    ctx->pc = 0x2f0e24u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2f0e28: 0xa7a7000c  sh          $a3, 0xC($sp)
    ctx->pc = 0x2f0e28u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 7));
    // 0x2f0e2c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2f0e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x2f0e30: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2f0e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2f0e34: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2f0e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2f0e38: 0xc0bce84  jal         func_2F3A10
    ctx->pc = 0x2F0E38u;
    SET_GPR_U32(ctx, 31, 0x2F0E40u);
    ctx->pc = 0x2F0E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0E38u;
    // 0x2f0e3c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3A10u, 0x2F0E38u, 0x2F0E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0E40u;
label_2f0e40:
    // 0x2f0e40: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F0E40u;
    {
        const bool branch_taken_0x2f0e40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E40u;
        // 0x2f0e44: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0e40) {
            ctx->pc = 0x2F0E4Cu;
            goto label_2f0e4c;
        }
    }
    ctx->pc = 0x2F0E48u;
    // 0x2f0e48: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2f0e48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f0e4c:
    // 0x2f0e4c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2f0e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f0e50: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2f0e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2f0e54: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0E54u;
        // 0x2f0e58: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0E5Cu;
    // 0x2f0e5c: 0x0  nop
    ctx->pc = 0x2f0e5cu;
    // NOP
    ctx->pc = 0x2f0e60u;
}

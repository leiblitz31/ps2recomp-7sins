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

// Function: sub_00348C58
// Address: 0x348c58 - 0x348cf8
void sub_00348C58_0x348c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348C58_0x348c58");
#endif

    switch (ctx->pc) {
        case 0x348c78u: goto label_348c78;
        default: break;
    }

    ctx->pc = 0x348c58u;

    // 0x348c58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x348c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x348c5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x348c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x348c60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x348c64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x348c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348c68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x348c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348c6c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x348c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x348c70: 0xc0d120c  jal         func_344830
    ctx->pc = 0x348C70u;
    SET_GPR_U32(ctx, 31, 0x348C78u);
    ctx->pc = 0x348C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348C70u;
    // 0x348c74: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x348C70u, 0x348C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348C78u;
label_348c78:
    // 0x348c78: 0x440001a  bltz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x348C78u;
    {
        const bool branch_taken_0x348c78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x348C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348C78u;
        // 0x348c7c: 0x2021021  addu        $v0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348c78) {
            ctx->pc = 0x348CE4u;
            goto label_348ce4;
        }
    }
    ctx->pc = 0x348C80u;
    // 0x348c80: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x348c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x348c84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x348c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x348c88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x348c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348c8c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x348c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x348c90: 0x3463007f  ori         $v1, $v1, 0x7F
    ctx->pc = 0x348c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)127);
    // 0x348c94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x348c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348c98: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x348c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x348c9c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x348c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x348ca0: 0xa045007f  sb          $a1, 0x7F($v0)
    ctx->pc = 0x348ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 5));
    // 0x348ca4: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x348ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x348ca8: 0xac4000a4  sw          $zero, 0xA4($v0)
    ctx->pc = 0x348ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 0));
    // 0x348cac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x348cacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x348cb0: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x348cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x348cb4: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x348cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x348cb8: 0xa045007c  sb          $a1, 0x7C($v0)
    ctx->pc = 0x348cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 124), (uint8_t)GPR_U32(ctx, 5));
    // 0x348cbc: 0xa045007d  sb          $a1, 0x7D($v0)
    ctx->pc = 0x348cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 125), (uint8_t)GPR_U32(ctx, 5));
    // 0x348cc0: 0xa045007e  sb          $a1, 0x7E($v0)
    ctx->pc = 0x348cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 126), (uint8_t)GPR_U32(ctx, 5));
    // 0x348cc4: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x348cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x348cc8: 0xac400088  sw          $zero, 0x88($v0)
    ctx->pc = 0x348cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 0));
    // 0x348ccc: 0xe440008c  swc1        $f0, 0x8C($v0)
    ctx->pc = 0x348cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
    // 0x348cd0: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x348cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
    // 0x348cd4: 0xac400098  sw          $zero, 0x98($v0)
    ctx->pc = 0x348cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 0));
    // 0x348cd8: 0xac40009c  sw          $zero, 0x9C($v0)
    ctx->pc = 0x348cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 0));
    // 0x348cdc: 0xac4000a0  sw          $zero, 0xA0($v0)
    ctx->pc = 0x348cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 0));
    // 0x348ce0: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x348ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
label_348ce4:
    // 0x348ce4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x348ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x348ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348cec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x348cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x348cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x348CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348CF0u;
        // 0x348cf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348CF8u;
}

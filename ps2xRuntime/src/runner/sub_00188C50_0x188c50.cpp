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

// Function: sub_00188C50
// Address: 0x188c50 - 0x188e00
void sub_00188C50_0x188c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188C50_0x188c50");
#endif

    switch (ctx->pc) {
        case 0x188c7cu: goto label_188c7c;
        case 0x188c8cu: goto label_188c8c;
        case 0x188cacu: goto label_188cac;
        case 0x188ce4u: goto label_188ce4;
        case 0x188d18u: goto label_188d18;
        case 0x188d44u: goto label_188d44;
        case 0x188d54u: goto label_188d54;
        case 0x188d98u: goto label_188d98;
        case 0x188dccu: goto label_188dcc;
        case 0x188decu: goto label_188dec;
        default: break;
    }

    ctx->pc = 0x188c50u;

    // 0x188c50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x188c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x188c54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x188c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x188c58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188c5c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x188c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x188c60: 0x8f82bae4  lw          $v0, -0x451C($gp)
    ctx->pc = 0x188c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949604)));
    // 0x188c64: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x188c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x188c68: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x188c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x188c6c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x188c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x188c70: 0x24a55268  addiu       $a1, $a1, 0x5268
    ctx->pc = 0x188c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21096));
    // 0x188c74: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x188C74u;
    SET_GPR_U32(ctx, 31, 0x188C7Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x188C74u, 0x188C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188C7Cu;
label_188c7c:
    // 0x188c7c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x188c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x188c80: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x188c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x188c84: 0xc05621c  jal         func_158870
    ctx->pc = 0x188C84u;
    SET_GPR_U32(ctx, 31, 0x188C8Cu);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x188C84u, 0x188C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188C8Cu;
label_188c8c:
    // 0x188c8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x188c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c90: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x188C90u;
    {
        const bool branch_taken_0x188c90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x188c90) {
            ctx->pc = 0x188D18u;
            goto label_188d18;
        }
    }
    ctx->pc = 0x188C98u;
    // 0x188c98: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x188c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x188c9c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x188c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x188ca0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x188ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188ca4: 0xc08c910  jal         func_232440
    ctx->pc = 0x188CA4u;
    SET_GPR_U32(ctx, 31, 0x188CACu);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x188CA4u, 0x188CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188CACu;
label_188cac:
    // 0x188cac: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x188cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x188cb0: 0xdf8291a8  ld          $v0, -0x6E58($gp)
    ctx->pc = 0x188cb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294939048)));
    // 0x188cb4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x188cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x188cb8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x188cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x188cbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x188cbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x188cc0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x188cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x188cc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x188cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188cc8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x188cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188ccc: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x188cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x188cd0: 0xc78d81b0  lwc1        $f13, -0x7E50($gp)
    ctx->pc = 0x188cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x188cd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x188cd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188cd8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x188cd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188cdc: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x188CDCu;
    SET_GPR_U32(ctx, 31, 0x188CE4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x188CDCu, 0x188CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188CE4u;
label_188ce4:
    // 0x188ce4: 0xc78080ac  lwc1        $f0, -0x7F54($gp)
    ctx->pc = 0x188ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188ce8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x188ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x188cec: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x188cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x188cf0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x188cf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x188cf4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x188cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x188cf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x188cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188cfc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x188cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188d00: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x188d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x188d04: 0xc78d81b0  lwc1        $f13, -0x7E50($gp)
    ctx->pc = 0x188d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x188d08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x188d08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x188d0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d10: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x188D10u;
    SET_GPR_U32(ctx, 31, 0x188D18u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x188D10u, 0x188D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188D18u;
label_188d18:
    // 0x188d18: 0x8f849190  lw          $a0, -0x6E70($gp)
    ctx->pc = 0x188d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939024)));
    // 0x188d1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x188d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188d20: 0x1083002a  beq         $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x188D20u;
    {
        const bool branch_taken_0x188d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x188d20) {
            ctx->pc = 0x188DCCu;
            goto label_188dcc;
        }
    }
    ctx->pc = 0x188D28u;
    // 0x188d28: 0x8f829190  lw          $v0, -0x6E70($gp)
    ctx->pc = 0x188d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939024)));
    // 0x188d2c: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x188d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x188d30: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x188d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x188d34: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x188d34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x188d38: 0x24a55268  addiu       $a1, $a1, 0x5268
    ctx->pc = 0x188d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21096));
    // 0x188d3c: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x188D3Cu;
    SET_GPR_U32(ctx, 31, 0x188D44u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x188D3Cu, 0x188D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188D44u;
label_188d44:
    // 0x188d44: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x188d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x188d48: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x188d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x188d4c: 0xc05621c  jal         func_158870
    ctx->pc = 0x188D4Cu;
    SET_GPR_U32(ctx, 31, 0x188D54u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x188D4Cu, 0x188D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188D54u;
label_188d54:
    // 0x188d54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x188d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d58: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x188D58u;
    {
        const bool branch_taken_0x188d58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x188d58) {
            ctx->pc = 0x188DCCu;
            goto label_188dcc;
        }
    }
    ctx->pc = 0x188D60u;
    // 0x188d60: 0x27a30048  addiu       $v1, $sp, 0x48
    ctx->pc = 0x188d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x188d64: 0xdf8291b0  ld          $v0, -0x6E50($gp)
    ctx->pc = 0x188d64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294939056)));
    // 0x188d68: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x188d68u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x188d6c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x188d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x188d70: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x188d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x188d74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x188d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x188d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188d7c: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x188d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x188d80: 0xc78c81b0  lwc1        $f12, -0x7E50($gp)
    ctx->pc = 0x188d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x188d84: 0xc78d842c  lwc1        $f13, -0x7BD4($gp)
    ctx->pc = 0x188d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x188d88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x188d88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x188d8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188d90: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x188D90u;
    SET_GPR_U32(ctx, 31, 0x188D98u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x188D90u, 0x188D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188D98u;
label_188d98:
    // 0x188d98: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x188d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188d9c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x188d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x188da0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x188da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x188da4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x188da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x188da8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x188da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188dac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x188dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x188db0: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x188db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x188db4: 0xc78c81b0  lwc1        $f12, -0x7E50($gp)
    ctx->pc = 0x188db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x188db8: 0xc78d842c  lwc1        $f13, -0x7BD4($gp)
    ctx->pc = 0x188db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x188dbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x188dbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188dc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x188dc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188dc4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x188DC4u;
    SET_GPR_U32(ctx, 31, 0x188DCCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x188DC4u, 0x188DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188DCCu;
label_188dcc:
    // 0x188dcc: 0x8f83bae4  lw          $v1, -0x451C($gp)
    ctx->pc = 0x188dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949604)));
    // 0x188dd0: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x188dd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x188dd4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x188DD4u;
    {
        const bool branch_taken_0x188dd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x188dd4) {
            ctx->pc = 0x188DECu;
            goto label_188dec;
        }
    }
    ctx->pc = 0x188DDCu;
    // 0x188ddc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x188ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x188de0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x188de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x188de4: 0xc062380  jal         func_188E00
    ctx->pc = 0x188DE4u;
    SET_GPR_U32(ctx, 31, 0x188DECu);
    ctx->pc = 0x188E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188E00u, 0x188DE4u, 0x188DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188DECu;
label_188dec:
    // 0x188dec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x188decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188df0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188df0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188df4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x188df4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x188df8: 0x3e00008  jr          $ra
    ctx->pc = 0x188DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188E00u;
}

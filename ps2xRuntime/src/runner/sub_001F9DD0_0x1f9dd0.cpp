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

// Function: sub_001F9DD0
// Address: 0x1f9dd0 - 0x1fa860
void sub_001F9DD0_0x1f9dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9DD0_0x1f9dd0");
#endif

    switch (ctx->pc) {
        case 0x1f9decu: goto label_1f9dec;
        case 0x1f9e0cu: goto label_1f9e0c;
        case 0x1f9e1cu: goto label_1f9e1c;
        case 0x1f9e2cu: goto label_1f9e2c;
        case 0x1f9e3cu: goto label_1f9e3c;
        case 0x1f9e94u: goto label_1f9e94;
        case 0x1f9f04u: goto label_1f9f04;
        case 0x1f9f18u: goto label_1f9f18;
        case 0x1f9f2cu: goto label_1f9f2c;
        case 0x1f9f40u: goto label_1f9f40;
        case 0x1f9f50u: goto label_1f9f50;
        case 0x1f9f70u: goto label_1f9f70;
        case 0x1f9fc4u: goto label_1f9fc4;
        case 0x1fa038u: goto label_1fa038;
        case 0x1fa04cu: goto label_1fa04c;
        case 0x1fa05cu: goto label_1fa05c;
        case 0x1fa068u: goto label_1fa068;
        case 0x1fa074u: goto label_1fa074;
        case 0x1fa080u: goto label_1fa080;
        case 0x1fa08cu: goto label_1fa08c;
        case 0x1fa0a4u: goto label_1fa0a4;
        case 0x1fa0b8u: goto label_1fa0b8;
        case 0x1fa0ccu: goto label_1fa0cc;
        case 0x1fa134u: goto label_1fa134;
        case 0x1fa15cu: goto label_1fa15c;
        case 0x1fa174u: goto label_1fa174;
        case 0x1fa18cu: goto label_1fa18c;
        case 0x1fa198u: goto label_1fa198;
        case 0x1fa1a4u: goto label_1fa1a4;
        case 0x1fa1bcu: goto label_1fa1bc;
        case 0x1fa1ccu: goto label_1fa1cc;
        case 0x1fa1fcu: goto label_1fa1fc;
        case 0x1fa22cu: goto label_1fa22c;
        case 0x1fa244u: goto label_1fa244;
        case 0x1fa2b4u: goto label_1fa2b4;
        case 0x1fa2e0u: goto label_1fa2e0;
        case 0x1fa2f8u: goto label_1fa2f8;
        case 0x1fa368u: goto label_1fa368;
        case 0x1fa398u: goto label_1fa398;
        case 0x1fa3b0u: goto label_1fa3b0;
        case 0x1fa3c0u: goto label_1fa3c0;
        case 0x1fa3ecu: goto label_1fa3ec;
        case 0x1fa404u: goto label_1fa404;
        case 0x1fa41cu: goto label_1fa41c;
        case 0x1fa45cu: goto label_1fa45c;
        case 0x1fa49cu: goto label_1fa49c;
        case 0x1fa4dcu: goto label_1fa4dc;
        case 0x1fa550u: goto label_1fa550;
        case 0x1fa570u: goto label_1fa570;
        case 0x1fa590u: goto label_1fa590;
        case 0x1fa5b0u: goto label_1fa5b0;
        case 0x1fa5c4u: goto label_1fa5c4;
        case 0x1fa5dcu: goto label_1fa5dc;
        case 0x1fa5e8u: goto label_1fa5e8;
        case 0x1fa600u: goto label_1fa600;
        case 0x1fa60cu: goto label_1fa60c;
        case 0x1fa624u: goto label_1fa624;
        case 0x1fa630u: goto label_1fa630;
        case 0x1fa648u: goto label_1fa648;
        case 0x1fa684u: goto label_1fa684;
        case 0x1fa690u: goto label_1fa690;
        case 0x1fa6e4u: goto label_1fa6e4;
        case 0x1fa70cu: goto label_1fa70c;
        case 0x1fa724u: goto label_1fa724;
        case 0x1fa758u: goto label_1fa758;
        case 0x1fa7acu: goto label_1fa7ac;
        case 0x1fa7bcu: goto label_1fa7bc;
        case 0x1fa7ccu: goto label_1fa7cc;
        case 0x1fa7e0u: goto label_1fa7e0;
        case 0x1fa7f0u: goto label_1fa7f0;
        case 0x1fa808u: goto label_1fa808;
        case 0x1fa824u: goto label_1fa824;
        case 0x1fa838u: goto label_1fa838;
        case 0x1fa844u: goto label_1fa844;
        default: break;
    }

    ctx->pc = 0x1f9dd0u;

    // 0x1f9dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f9dd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f9dd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1f9dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1f9ddc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f9ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9de0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1f9de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f9de4: 0xc064924  jal         func_192490
    ctx->pc = 0x1F9DE4u;
    SET_GPR_U32(ctx, 31, 0x1F9DECu);
    ctx->pc = 0x192490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192490u, 0x1F9DE4u, 0x1F9DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9DECu;
label_1f9dec:
    // 0x1f9dec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1f9decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1f9df0: 0x24634e80  addiu       $v1, $v1, 0x4E80
    ctx->pc = 0x1f9df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20096));
    // 0x1f9df4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f9df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9df8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f9df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1f9dfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f9dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9e00: 0x244400a8  addiu       $a0, $v0, 0xA8
    ctx->pc = 0x1f9e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
    // 0x1f9e04: 0xc056254  jal         func_158950
    ctx->pc = 0x1F9E04u;
    SET_GPR_U32(ctx, 31, 0x1F9E0Cu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1F9E04u, 0x1F9E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9E0Cu;
label_1f9e0c:
    // 0x1f9e0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f9e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9e10: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x1f9e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f9e14: 0xc056254  jal         func_158950
    ctx->pc = 0x1F9E14u;
    SET_GPR_U32(ctx, 31, 0x1F9E1Cu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1F9E14u, 0x1F9E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9E1Cu;
label_1f9e1c:
    // 0x1f9e1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9e20: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x1f9e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1f9e24: 0xc056254  jal         func_158950
    ctx->pc = 0x1F9E24u;
    SET_GPR_U32(ctx, 31, 0x1F9E2Cu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1F9E24u, 0x1F9E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9E2Cu;
label_1f9e2c:
    // 0x1f9e2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f9e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9e30: 0x244400cc  addiu       $a0, $v0, 0xCC
    ctx->pc = 0x1f9e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x1f9e34: 0xc056254  jal         func_158950
    ctx->pc = 0x1F9E34u;
    SET_GPR_U32(ctx, 31, 0x1F9E3Cu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1F9E34u, 0x1F9E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9E3Cu;
label_1f9e3c:
    // 0x1f9e3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f9e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9e40: 0xac400124  sw          $zero, 0x124($v0)
    ctx->pc = 0x1f9e40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 0));
    // 0x1f9e44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f9e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9e48: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1f9e48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1f9e4c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f9e4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9e50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f9e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9e54: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x1f9e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    // 0x1f9e58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f9e58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9e5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f9e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9e60: 0xe4400130  swc1        $f0, 0x130($v0)
    ctx->pc = 0x1f9e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 304), bits); }
    // 0x1f9e64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f9e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9e68: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f9e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9e6c: 0xe4400134  swc1        $f0, 0x134($v0)
    ctx->pc = 0x1f9e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 308), bits); }
    // 0x1f9e70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f9e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9e74: 0xaf82bb64  sw          $v0, -0x449C($gp)
    ctx->pc = 0x1f9e74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949732), GPR_U32(ctx, 2));
    // 0x1f9e78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f9e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9e7c: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1f9e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x1f9e80: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1f9e80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1f9e84: 0x24a58bc0  addiu       $a1, $a1, -0x7440
    ctx->pc = 0x1f9e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937536));
    // 0x1f9e88: 0x24460064  addiu       $a2, $v0, 0x64
    ctx->pc = 0x1f9e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1f9e8c: 0xc08e514  jal         func_239450
    ctx->pc = 0x1F9E8Cu;
    SET_GPR_U32(ctx, 31, 0x1F9E94u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x1F9E8Cu, 0x1F9E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9E94u;
label_1f9e94:
    // 0x1f9e94: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1f9e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f9e98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f9e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9e9c: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x1f9e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x1f9ea0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f9ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9ea8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f9ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f9eac: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9EB4u;
    // 0x1f9eb4: 0x0  nop
    ctx->pc = 0x1f9eb4u;
    // NOP
    // 0x1f9eb8: 0x0  nop
    ctx->pc = 0x1f9eb8u;
    // NOP
    // 0x1f9ebc: 0x0  nop
    ctx->pc = 0x1f9ebcu;
    // NOP
    // 0x1f9ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f9ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f9ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f9ec8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1f9ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1f9ecc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1f9eccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1f9ed0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f9ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9ed4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1F9ED4u;
    {
        const bool branch_taken_0x1f9ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9ed4) {
            ctx->pc = 0x1F9F70u;
            goto label_1f9f70;
        }
    }
    ctx->pc = 0x1F9EDCu;
    // 0x1f9edc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1f9edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1f9ee0: 0x24634e80  addiu       $v1, $v1, 0x4E80
    ctx->pc = 0x1f9ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20096));
    // 0x1f9ee4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f9ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9ee8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1f9ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1f9eec: 0xaf80bb64  sw          $zero, -0x449C($gp)
    ctx->pc = 0x1f9eecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949732), GPR_U32(ctx, 0));
    // 0x1f9ef0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f9ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9ef4: 0x244400cc  addiu       $a0, $v0, 0xCC
    ctx->pc = 0x1f9ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
    // 0x1f9ef8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f9ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f9efc: 0xc056094  jal         func_158250
    ctx->pc = 0x1F9EFCu;
    SET_GPR_U32(ctx, 31, 0x1F9F04u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1F9EFCu, 0x1F9F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9F04u;
label_1f9f04:
    // 0x1f9f04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f9f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9f08: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x1f9f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1f9f0c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f9f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f9f10: 0xc056094  jal         func_158250
    ctx->pc = 0x1F9F10u;
    SET_GPR_U32(ctx, 31, 0x1F9F18u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1F9F10u, 0x1F9F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9F18u;
label_1f9f18:
    // 0x1f9f18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f9f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9f1c: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x1f9f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f9f20: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f9f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f9f24: 0xc056094  jal         func_158250
    ctx->pc = 0x1F9F24u;
    SET_GPR_U32(ctx, 31, 0x1F9F2Cu);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1F9F24u, 0x1F9F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9F2Cu;
label_1f9f2c:
    // 0x1f9f2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f9f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9f30: 0x244400a8  addiu       $a0, $v0, 0xA8
    ctx->pc = 0x1f9f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
    // 0x1f9f34: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f9f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f9f38: 0xc056094  jal         func_158250
    ctx->pc = 0x1F9F38u;
    SET_GPR_U32(ctx, 31, 0x1F9F40u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1F9F38u, 0x1F9F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9F40u;
label_1f9f40:
    // 0x1f9f40: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f9f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9f44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f9f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9f48: 0xc064970  jal         func_1925C0
    ctx->pc = 0x1F9F48u;
    SET_GPR_U32(ctx, 31, 0x1F9F50u);
    ctx->pc = 0x1925C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1925C0u, 0x1F9F48u, 0x1F9F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9F50u;
label_1f9f50:
    // 0x1f9f50: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1f9f50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9f54: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f9f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f9f58: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f9f58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f9f5c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9F5Cu;
    {
        const bool branch_taken_0x1f9f5c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1f9f5c) {
            ctx->pc = 0x1F9F70u;
            goto label_1f9f70;
        }
    }
    ctx->pc = 0x1F9F64u;
    // 0x1f9f64: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1f9f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9f68: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1F9F68u;
    SET_GPR_U32(ctx, 31, 0x1F9F70u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1F9F68u, 0x1F9F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9F70u;
label_1f9f70:
    // 0x1f9f70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1f9f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9f74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9f78: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1f9f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f9f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9F84u;
    // 0x1f9f84: 0x0  nop
    ctx->pc = 0x1f9f84u;
    // NOP
    // 0x1f9f88: 0x0  nop
    ctx->pc = 0x1f9f88u;
    // NOP
    // 0x1f9f8c: 0x0  nop
    ctx->pc = 0x1f9f8cu;
    // NOP
    // 0x1f9f90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f9f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f9f94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f9f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f9f98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f9f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f9f9c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1f9f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1f9fa0: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x1f9fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f9fa4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1f9fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1f9fa8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f9fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9fac: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1f9facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1f9fb0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f9fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9fb4: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x1f9fb4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9fb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f9fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9fbc: 0xc064a4c  jal         func_192930
    ctx->pc = 0x1F9FBCu;
    SET_GPR_U32(ctx, 31, 0x1F9FC4u);
    ctx->pc = 0x192930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192930u, 0x1F9FBCu, 0x1F9FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9FC4u;
label_1f9fc4:
    // 0x1f9fc4: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x1f9fc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f9fc8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1f9fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f9fcc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F9FCCu;
    {
        const bool branch_taken_0x1f9fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9fcc) {
            ctx->pc = 0x1F9FECu;
            goto label_1f9fec;
        }
    }
    ctx->pc = 0x1F9FD4u;
    // 0x1f9fd4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9fd8: 0xa0600121  sb          $zero, 0x121($v1)
    ctx->pc = 0x1f9fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 289), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f9fdc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9fe0: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1f9fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f9fe4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f9fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f9fe8: 0xe46000e8  swc1        $f0, 0xE8($v1)
    ctx->pc = 0x1f9fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 232), bits); }
label_1f9fec:
    // 0x1f9fec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9ff0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f9ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9ff4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1f9ff4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f9ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA000u;
    // 0x1fa000: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1fa000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1fa004: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1fa004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1fa008: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1fa008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1fa00c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1fa00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1fa010: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1fa010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1fa014: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1fa014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1fa018: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1fa018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1fa01c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1fa01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1fa020: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fa020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1fa024: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fa024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fa028: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x1fa028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x1fa02c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1fa02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa030: 0xc064a74  jal         func_1929D0
    ctx->pc = 0x1FA030u;
    SET_GPR_U32(ctx, 31, 0x1FA038u);
    ctx->pc = 0x1929D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1929D0u, 0x1FA030u, 0x1FA038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA038u;
label_1fa038:
    // 0x1fa038: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1fa038u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fa03c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1fa03cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa040: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1fa040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa044: 0xc07f4f4  jal         func_1FD3D0
    ctx->pc = 0x1FA044u;
    SET_GPR_U32(ctx, 31, 0x1FA04Cu);
    ctx->pc = 0x1FD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3D0u, 0x1FA044u, 0x1FA04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA04Cu;
label_1fa04c:
    // 0x1fa04c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1fa04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa050: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1fa050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa054: 0xc07f544  jal         func_1FD510
    ctx->pc = 0x1FA054u;
    SET_GPR_U32(ctx, 31, 0x1FA05Cu);
    ctx->pc = 0x1FD510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD510u, 0x1FA054u, 0x1FA05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA05Cu;
label_1fa05c:
    // 0x1fa05c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1fa05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa060: 0xc07ef34  jal         func_1FBCD0
    ctx->pc = 0x1FA060u;
    SET_GPR_U32(ctx, 31, 0x1FA068u);
    ctx->pc = 0x1FBCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBCD0u, 0x1FA060u, 0x1FA068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA068u;
label_1fa068:
    // 0x1fa068: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1fa068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa06c: 0xc07f7ec  jal         func_1FDFB0
    ctx->pc = 0x1FA06Cu;
    SET_GPR_U32(ctx, 31, 0x1FA074u);
    ctx->pc = 0x1FDFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDFB0u, 0x1FA06Cu, 0x1FA074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA074u;
label_1fa074:
    // 0x1fa074: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1fa074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa078: 0xc07f30c  jal         func_1FCC30
    ctx->pc = 0x1FA078u;
    SET_GPR_U32(ctx, 31, 0x1FA080u);
    ctx->pc = 0x1FCC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCC30u, 0x1FA078u, 0x1FA080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA080u;
label_1fa080:
    // 0x1fa080: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1fa080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa084: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FA084u;
    SET_GPR_U32(ctx, 31, 0x1FA08Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FA084u, 0x1FA08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA08Cu;
label_1fa08c:
    // 0x1fa08c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1fa08cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa090: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1fa090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa094: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1fa094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1fa098: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fa098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fa09c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1FA09Cu;
    SET_GPR_U32(ctx, 31, 0x1FA0A4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1FA09Cu, 0x1FA0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA0A4u;
label_1fa0a4:
    // 0x1fa0a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1fa0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa0a8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1fa0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa0ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fa0acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa0b0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1FA0B0u;
    SET_GPR_U32(ctx, 31, 0x1FA0B8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1FA0B0u, 0x1FA0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA0B8u;
label_1fa0b8:
    // 0x1fa0b8: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1fa0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1fa0bc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1fa0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1fa0c0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA0C0u;
    {
        const bool branch_taken_0x1fa0c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa0c0) {
            ctx->pc = 0x1FA0E8u;
            goto label_1fa0e8;
        }
    }
    ctx->pc = 0x1FA0C8u;
    // 0x1fa0c8: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1fa0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1fa0cc:
    // 0x1fa0cc: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1fa0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fa0d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fa0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fa0d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fa0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fa0d8: 0x0  nop
    ctx->pc = 0x1fa0d8u;
    // NOP
    // 0x1fa0dc: 0x0  nop
    ctx->pc = 0x1fa0dcu;
    // NOP
    // 0x1fa0e0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FA0E0u;
    {
        const bool branch_taken_0x1fa0e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa0e0) {
            ctx->pc = 0x1FA0CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa0cc;
        }
    }
    ctx->pc = 0x1FA0E8u;
label_1fa0e8:
    // 0x1fa0e8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fa0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fa0ec: 0xc440bfc8  lwc1        $f0, -0x4038($v0)
    ctx->pc = 0x1fa0ecu;
    { uint32_t bits = FAST_READ32(0x60BFC8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa0f0: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1fa0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1fa0f4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fa0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fa0f8: 0xc440bfc8  lwc1        $f0, -0x4038($v0)
    ctx->pc = 0x1fa0f8u;
    { uint32_t bits = FAST_READ32(0x60BFC8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa0fc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1fa0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1fa100: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1fa100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1fa104: 0x2782b6c0  addiu       $v0, $gp, -0x4940
    ctx->pc = 0x1fa104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1fa108: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1fa108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x1fa10c: 0x2782b6c0  addiu       $v0, $gp, -0x4940
    ctx->pc = 0x1fa10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1fa110: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x1fa110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x1fa114: 0x2782b6c0  addiu       $v0, $gp, -0x4940
    ctx->pc = 0x1fa114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1fa118: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x1fa118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x1fa11c: 0x2782b6c0  addiu       $v0, $gp, -0x4940
    ctx->pc = 0x1fa11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x1fa120: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1fa120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x1fa124: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa128: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1fa128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1fa12c: 0xc05611c  jal         func_158470
    ctx->pc = 0x1FA12Cu;
    SET_GPR_U32(ctx, 31, 0x1FA134u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1FA12Cu, 0x1FA134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA134u;
label_1fa134:
    // 0x1fa134: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1fa134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1fa138: 0x8c63bfb4  lw          $v1, -0x404C($v1)
    ctx->pc = 0x1fa138u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BFB4u));
    // 0x1fa13c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fa13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fa140: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fa140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fa144: 0x8c42bfb4  lw          $v0, -0x404C($v0)
    ctx->pc = 0x1fa144u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BFB4u));
    // 0x1fa148: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fa148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fa14c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa150: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1fa150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1fa154: 0xc056708  jal         func_159C20
    ctx->pc = 0x1FA154u;
    SET_GPR_U32(ctx, 31, 0x1FA15Cu);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1FA154u, 0x1FA15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA15Cu;
label_1fa15c:
    // 0x1fa15c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa160: 0x244400a8  addiu       $a0, $v0, 0xA8
    ctx->pc = 0x1fa160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
    // 0x1fa164: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fa164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fa168: 0x8c45bfb4  lw          $a1, -0x404C($v0)
    ctx->pc = 0x1fa168u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x60BFB4u));
    // 0x1fa16c: 0xc056708  jal         func_159C20
    ctx->pc = 0x1FA16Cu;
    SET_GPR_U32(ctx, 31, 0x1FA174u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1FA16Cu, 0x1FA174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA174u;
label_1fa174:
    // 0x1fa174: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa178: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x1fa178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1fa17c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fa17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fa180: 0x8c45bfb4  lw          $a1, -0x404C($v0)
    ctx->pc = 0x1fa180u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x60BFB4u));
    // 0x1fa184: 0xc056708  jal         func_159C20
    ctx->pc = 0x1FA184u;
    SET_GPR_U32(ctx, 31, 0x1FA18Cu);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1FA184u, 0x1FA18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA18Cu;
label_1fa18c:
    // 0x1fa18c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1fa18cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa190: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x1FA190u;
    {
        const bool branch_taken_0x1fa190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa190) {
            ctx->pc = 0x1FA524u;
            goto label_1fa524;
        }
    }
    ctx->pc = 0x1FA198u;
label_1fa198:
    // 0x1fa198: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fa198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa19c: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x1FA19Cu;
    {
        const bool branch_taken_0x1fa19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa19c) {
            ctx->pc = 0x1FA50Cu;
            goto label_1fa50c;
        }
    }
    ctx->pc = 0x1FA1A4u;
label_1fa1a4:
    // 0x1fa1a4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1fa1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1fa1a8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1fa1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa1ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fa1acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa1b0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1fa1b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa1b4: 0xc07fa44  jal         func_1FE910
    ctx->pc = 0x1FA1B4u;
    SET_GPR_U32(ctx, 31, 0x1FA1BCu);
    ctx->pc = 0x1FE910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE910u, 0x1FA1B4u, 0x1FA1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA1BCu;
label_1fa1bc:
    // 0x1fa1bc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1fa1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1fa1c0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1fa1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1fa1c4: 0xc05db24  jal         func_176C90
    ctx->pc = 0x1FA1C4u;
    SET_GPR_U32(ctx, 31, 0x1FA1CCu);
    ctx->pc = 0x176C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C90u, 0x1FA1C4u, 0x1FA1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA1CCu;
label_1fa1cc:
    // 0x1fa1cc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fa1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fa1d0: 0x8c42bfac  lw          $v0, -0x4054($v0)
    ctx->pc = 0x1fa1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BFACu));
    // 0x1fa1d4: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x1fa1d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1fa1d8: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x1fa1d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1fa1dc: 0x26550004  addiu       $s5, $s2, 0x4
    ctx->pc = 0x1fa1dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1fa1e0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fa1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fa1e4: 0x8c42bfb4  lw          $v0, -0x404C($v0)
    ctx->pc = 0x1fa1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BFB4u));
    // 0x1fa1e8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1fa1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1fa1ec: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x1fa1ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1fa1f0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1fa1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa1f4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FA1F4u;
    SET_GPR_U32(ctx, 31, 0x1FA1FCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FA1F4u, 0x1FA1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA1FCu;
label_1fa1fc:
    // 0x1fa1fc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1fa1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1fa200: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa204: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x1fa204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
    // 0x1fa208: 0x24a5bf8c  addiu       $a1, $a1, -0x4074
    ctx->pc = 0x1fa208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950796));
    // 0x1fa20c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1fa20cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fa210: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x1fa210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1fa214: 0x27a800b8  addiu       $t0, $sp, 0xB8
    ctx->pc = 0x1fa214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1fa218: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fa218u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa21c: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x1fa21cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1fa220: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fa220u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa224: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1FA224u;
    SET_GPR_U32(ctx, 31, 0x1FA22Cu);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1FA224u, 0x1FA22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA22Cu;
label_1fa22c:
    // 0x1fa22c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1fa22cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa230: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa234: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1fa234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1fa238: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1fa238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa23c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1FA23Cu;
    SET_GPR_U32(ctx, 31, 0x1FA244u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1FA23Cu, 0x1FA244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA244u;
label_1fa244:
    // 0x1fa244: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x1fa244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x1fa248: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1fa248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa24c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1fa24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1fa250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa254: 0x0  nop
    ctx->pc = 0x1fa254u;
    // NOP
    // 0x1fa258: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fa258u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fa25c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1fa25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1fa260: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1fa260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa264: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1fa264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1fa268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa26c: 0x0  nop
    ctx->pc = 0x1fa26cu;
    // NOP
    // 0x1fa270: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1fa270u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1fa274: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1fa274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1fa278: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x1fa278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa27c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1fa27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1fa280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa284: 0x0  nop
    ctx->pc = 0x1fa284u;
    // NOP
    // 0x1fa288: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fa288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fa28c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1fa28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1fa290: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x1fa290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa294: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1fa294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1fa298: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa29c: 0x0  nop
    ctx->pc = 0x1fa29cu;
    // NOP
    // 0x1fa2a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fa2a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fa2a4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1fa2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1fa2a8: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1fa2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa2ac: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FA2ACu;
    SET_GPR_U32(ctx, 31, 0x1FA2B4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FA2ACu, 0x1FA2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA2B4u;
label_1fa2b4:
    // 0x1fa2b4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1fa2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1fa2b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa2bc: 0x27859978  addiu       $a1, $gp, -0x6688
    ctx->pc = 0x1fa2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941048));
    // 0x1fa2c0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1fa2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fa2c4: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x1fa2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1fa2c8: 0x27a800b8  addiu       $t0, $sp, 0xB8
    ctx->pc = 0x1fa2c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1fa2cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fa2ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa2d0: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x1fa2d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1fa2d4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fa2d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa2d8: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1FA2D8u;
    SET_GPR_U32(ctx, 31, 0x1FA2E0u);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1FA2D8u, 0x1FA2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA2E0u;
label_1fa2e0:
    // 0x1fa2e0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1fa2e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa2e4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa2e8: 0x244400a8  addiu       $a0, $v0, 0xA8
    ctx->pc = 0x1fa2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
    // 0x1fa2ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fa2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa2f0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1FA2F0u;
    SET_GPR_U32(ctx, 31, 0x1FA2F8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1FA2F0u, 0x1FA2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA2F8u;
label_1fa2f8:
    // 0x1fa2f8: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x1fa2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x1fa2fc: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1fa2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa300: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1fa300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1fa304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa308: 0x0  nop
    ctx->pc = 0x1fa308u;
    // NOP
    // 0x1fa30c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1fa30cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1fa310: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1fa310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1fa314: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1fa314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa318: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1fa318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1fa31c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa31cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa320: 0x0  nop
    ctx->pc = 0x1fa320u;
    // NOP
    // 0x1fa324: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fa324u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1fa328: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1fa328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1fa32c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x1fa32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa330: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1fa330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1fa334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa338: 0x0  nop
    ctx->pc = 0x1fa338u;
    // NOP
    // 0x1fa33c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1fa33cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1fa340: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1fa340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1fa344: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x1fa344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa348: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1fa348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1fa34c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa34cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa350: 0x0  nop
    ctx->pc = 0x1fa350u;
    // NOP
    // 0x1fa354: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1fa354u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1fa358: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1fa358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1fa35c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1fa35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa360: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FA360u;
    SET_GPR_U32(ctx, 31, 0x1FA368u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FA360u, 0x1FA368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA368u;
label_1fa368:
    // 0x1fa368: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1fa368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1fa36c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa370: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1fa370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1fa374: 0x24a58be0  addiu       $a1, $a1, -0x7420
    ctx->pc = 0x1fa374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937568));
    // 0x1fa378: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1fa378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fa37c: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x1fa37cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1fa380: 0x27a800b8  addiu       $t0, $sp, 0xB8
    ctx->pc = 0x1fa380u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1fa384: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fa384u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa388: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x1fa388u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1fa38c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fa38cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa390: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1FA390u;
    SET_GPR_U32(ctx, 31, 0x1FA398u);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1FA390u, 0x1FA398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA398u;
label_1fa398:
    // 0x1fa398: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1fa398u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa39c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa3a0: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x1fa3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1fa3a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fa3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa3a8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1FA3A8u;
    SET_GPR_U32(ctx, 31, 0x1FA3B0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1FA3A8u, 0x1FA3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA3B0u;
label_1fa3b0:
    // 0x1fa3b0: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x1fa3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x1fa3b4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1fa3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa3b8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FA3B8u;
    SET_GPR_U32(ctx, 31, 0x1FA3C0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FA3B8u, 0x1FA3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA3C0u;
label_1fa3c0:
    // 0x1fa3c0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1fa3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x1fa3c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa3c8: 0x27859980  addiu       $a1, $gp, -0x6680
    ctx->pc = 0x1fa3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941056));
    // 0x1fa3cc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1fa3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fa3d0: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x1fa3d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1fa3d4: 0x27a800b8  addiu       $t0, $sp, 0xB8
    ctx->pc = 0x1fa3d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1fa3d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fa3d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa3dc: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x1fa3dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1fa3e0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1fa3e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa3e4: 0xc08bc88  jal         func_22F220
    ctx->pc = 0x1FA3E4u;
    SET_GPR_U32(ctx, 31, 0x1FA3ECu);
    ctx->pc = 0x22F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F220u, 0x1FA3E4u, 0x1FA3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA3ECu;
label_1fa3ec:
    // 0x1fa3ec: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1fa3ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa3f0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa3f4: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1fa3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1fa3f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fa3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa3fc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1FA3FCu;
    SET_GPR_U32(ctx, 31, 0x1FA404u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1FA3FCu, 0x1FA404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA404u;
label_1fa404:
    // 0x1fa404: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x1fa404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x1fa408: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa40c: 0x244400a8  addiu       $a0, $v0, 0xA8
    ctx->pc = 0x1fa40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
    // 0x1fa410: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fa410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa414: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1FA414u;
    SET_GPR_U32(ctx, 31, 0x1FA41Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1FA414u, 0x1FA41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA41Cu;
label_1fa41c:
    // 0x1fa41c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fa41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa420: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1fa420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa424: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1fa424u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fa428: 0x8c6300a4  lw          $v1, 0xA4($v1)
    ctx->pc = 0x1fa428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1fa42c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1fa42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fa430: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x1fa430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1fa434: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1fa434u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1fa438: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1fa438u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fa43c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fa43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fa440: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fa440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fa444: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1fa444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1fa448: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa44c: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x1fa44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1fa450: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fa450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa454: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1FA454u;
    SET_GPR_U32(ctx, 31, 0x1FA45Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1FA454u, 0x1FA45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA45Cu;
label_1fa45c:
    // 0x1fa45c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1fa45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa460: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa464: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1fa464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fa468: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1fa468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1fa46c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fa46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fa470: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1fa470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1fa474: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1fa474u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1fa478: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fa478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fa47c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fa47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa480: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fa480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fa484: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1fa484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1fa488: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa48c: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1fa48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1fa490: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1fa490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa494: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1FA494u;
    SET_GPR_U32(ctx, 31, 0x1FA49Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1FA494u, 0x1FA49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA49Cu;
label_1fa49c:
    // 0x1fa49c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1fa49cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa4a0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa4a4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1fa4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fa4a8: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1fa4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1fa4ac: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fa4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fa4b0: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1fa4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1fa4b4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1fa4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1fa4b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fa4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fa4bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fa4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa4c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fa4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fa4c4: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x1fa4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x1fa4c8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa4cc: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1fa4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1fa4d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fa4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa4d4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1FA4D4u;
    SET_GPR_U32(ctx, 31, 0x1FA4DCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1FA4D4u, 0x1FA4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA4DCu;
label_1fa4dc:
    // 0x1fa4dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1fa4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fa4e0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa4e4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1fa4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1fa4e8: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1fa4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1fa4ec: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1fa4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fa4f0: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1fa4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1fa4f4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1fa4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1fa4f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fa4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fa4fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fa4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa500: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fa500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fa504: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1fa504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1fa508: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fa508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fa50c:
    // 0x1fa50c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fa50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fa510: 0x8c42bfac  lw          $v0, -0x4054($v0)
    ctx->pc = 0x1fa510u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BFACu));
    // 0x1fa514: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1fa514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fa518: 0x1440ff22  bnez        $v0, . + 4 + (-0xDE << 2)
    ctx->pc = 0x1FA518u;
    {
        const bool branch_taken_0x1fa518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa518) {
            ctx->pc = 0x1FA1A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa1a4;
        }
    }
    ctx->pc = 0x1FA520u;
    // 0x1fa520: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fa520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1fa524:
    // 0x1fa524: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1fa524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1fa528: 0x8c42bfb0  lw          $v0, -0x4050($v0)
    ctx->pc = 0x1fa528u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BFB0u));
    // 0x1fa52c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1fa52cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fa530: 0x1440ff19  bnez        $v0, . + 4 + (-0xE7 << 2)
    ctx->pc = 0x1FA530u;
    {
        const bool branch_taken_0x1fa530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa530) {
            ctx->pc = 0x1FA198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa198;
        }
    }
    ctx->pc = 0x1FA538u;
    // 0x1fa538: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa53c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1fa53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1fa540: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1fa540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1fa544: 0x24a58c00  addiu       $a1, $a1, -0x7400
    ctx->pc = 0x1fa544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937600));
    // 0x1fa548: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1FA548u;
    SET_GPR_U32(ctx, 31, 0x1FA550u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1FA548u, 0x1FA550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA550u;
label_1fa550:
    // 0x1fa550: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1fa550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa554: 0xac6200d8  sw          $v0, 0xD8($v1)
    ctx->pc = 0x1fa554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 2));
    // 0x1fa558: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa55c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1fa55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1fa560: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1fa560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1fa564: 0x24a58c18  addiu       $a1, $a1, -0x73E8
    ctx->pc = 0x1fa564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937624));
    // 0x1fa568: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1FA568u;
    SET_GPR_U32(ctx, 31, 0x1FA570u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1FA568u, 0x1FA570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA570u;
label_1fa570:
    // 0x1fa570: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1fa570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa574: 0xac6200dc  sw          $v0, 0xDC($v1)
    ctx->pc = 0x1fa574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 220), GPR_U32(ctx, 2));
    // 0x1fa578: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa57c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1fa57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1fa580: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1fa580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1fa584: 0x24a58c28  addiu       $a1, $a1, -0x73D8
    ctx->pc = 0x1fa584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937640));
    // 0x1fa588: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1FA588u;
    SET_GPR_U32(ctx, 31, 0x1FA590u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1FA588u, 0x1FA590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA590u;
label_1fa590:
    // 0x1fa590: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1fa590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa594: 0xac6200e0  sw          $v0, 0xE0($v1)
    ctx->pc = 0x1fa594u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 2));
    // 0x1fa598: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa59c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1fa59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1fa5a0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1fa5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1fa5a4: 0x24a58c40  addiu       $a1, $a1, -0x73C0
    ctx->pc = 0x1fa5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937664));
    // 0x1fa5a8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1FA5A8u;
    SET_GPR_U32(ctx, 31, 0x1FA5B0u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1FA5A8u, 0x1FA5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA5B0u;
label_1fa5b0:
    // 0x1fa5b0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1fa5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa5b4: 0xac6200e4  sw          $v0, 0xE4($v1)
    ctx->pc = 0x1fa5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 228), GPR_U32(ctx, 2));
    // 0x1fa5b8: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1fa5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa5bc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FA5BCu;
    SET_GPR_U32(ctx, 31, 0x1FA5C4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FA5BCu, 0x1FA5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA5C4u;
label_1fa5c4:
    // 0x1fa5c4: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1fa5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa5c8: 0x8c6500d8  lw          $a1, 0xD8($v1)
    ctx->pc = 0x1fa5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x1fa5cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa5d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fa5d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa5d4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1FA5D4u;
    SET_GPR_U32(ctx, 31, 0x1FA5DCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1FA5D4u, 0x1FA5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA5DCu;
label_1fa5dc:
    // 0x1fa5dc: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1fa5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa5e0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FA5E0u;
    SET_GPR_U32(ctx, 31, 0x1FA5E8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FA5E0u, 0x1FA5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA5E8u;
label_1fa5e8:
    // 0x1fa5e8: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1fa5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa5ec: 0x8c6500dc  lw          $a1, 0xDC($v1)
    ctx->pc = 0x1fa5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
    // 0x1fa5f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa5f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fa5f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa5f8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1FA5F8u;
    SET_GPR_U32(ctx, 31, 0x1FA600u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1FA5F8u, 0x1FA600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA600u;
label_1fa600:
    // 0x1fa600: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1fa600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa604: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FA604u;
    SET_GPR_U32(ctx, 31, 0x1FA60Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FA604u, 0x1FA60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA60Cu;
label_1fa60c:
    // 0x1fa60c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1fa60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa610: 0x8c6500e0  lw          $a1, 0xE0($v1)
    ctx->pc = 0x1fa610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 224)));
    // 0x1fa614: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa618: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fa618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa61c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1FA61Cu;
    SET_GPR_U32(ctx, 31, 0x1FA624u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1FA61Cu, 0x1FA624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA624u;
label_1fa624:
    // 0x1fa624: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1fa624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa628: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1FA628u;
    SET_GPR_U32(ctx, 31, 0x1FA630u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1FA628u, 0x1FA630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA630u;
label_1fa630:
    // 0x1fa630: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1fa630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa634: 0x8c6500e4  lw          $a1, 0xE4($v1)
    ctx->pc = 0x1fa634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
    // 0x1fa638: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa63c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fa63cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa640: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1FA640u;
    SET_GPR_U32(ctx, 31, 0x1FA648u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1FA640u, 0x1FA648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA648u;
label_1fa648:
    // 0x1fa648: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa64c: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1fa64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1fa650: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x1fa650u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1fa654: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA654u;
    {
        const bool branch_taken_0x1fa654 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa654) {
            ctx->pc = 0x1FA668u;
            goto label_1fa668;
        }
    }
    ctx->pc = 0x1FA65Cu;
    // 0x1fa65c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1fa65cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fa660: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA660u;
    {
        const bool branch_taken_0x1fa660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa660) {
            ctx->pc = 0x1FA670u;
            goto label_1fa670;
        }
    }
    ctx->pc = 0x1FA668u;
label_1fa668:
    // 0x1fa668: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa66c: 0x8c530038  lw          $s3, 0x38($v0)
    ctx->pc = 0x1fa66cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1fa670:
    // 0x1fa670: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa674: 0xac530038  sw          $s3, 0x38($v0)
    ctx->pc = 0x1fa674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 19));
    // 0x1fa678: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1fa678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa67c: 0xc07ef88  jal         func_1FBE20
    ctx->pc = 0x1FA67Cu;
    SET_GPR_U32(ctx, 31, 0x1FA684u);
    ctx->pc = 0x1FBE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE20u, 0x1FA67Cu, 0x1FA684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA684u;
label_1fa684:
    // 0x1fa684: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1fa684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa688: 0xc07fc80  jal         func_1FF200
    ctx->pc = 0x1FA688u;
    SET_GPR_U32(ctx, 31, 0x1FA690u);
    ctx->pc = 0x1FF200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF200u, 0x1FA688u, 0x1FA690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA690u;
label_1fa690:
    // 0x1fa690: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fa690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa694: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa698: 0xac430124  sw          $v1, 0x124($v0)
    ctx->pc = 0x1fa698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 3));
    // 0x1fa69c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa6a0: 0x8c420124  lw          $v0, 0x124($v0)
    ctx->pc = 0x1fa6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x1fa6a4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1fa6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1fa6a8: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fa6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1fa6ac: 0x24428b70  addiu       $v0, $v0, -0x7490
    ctx->pc = 0x1fa6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937456));
    // 0x1fa6b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fa6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fa6b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fa6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa6b8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa6bc: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x1fa6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    // 0x1fa6c0: 0xa3a000cf  sb          $zero, 0xCF($sp)
    ctx->pc = 0x1fa6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 207), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fa6c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fa6c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fa6c8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fa6c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1fa6cc: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1fa6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa6d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1fa6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fa6d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fa6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa6d8: 0x27a600cf  addiu       $a2, $sp, 0xCF
    ctx->pc = 0x1fa6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 207));
    // 0x1fa6dc: 0xc07edfc  jal         func_1FB7F0
    ctx->pc = 0x1FA6DCu;
    SET_GPR_U32(ctx, 31, 0x1FA6E4u);
    ctx->pc = 0x1FB7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F0u, 0x1FA6DCu, 0x1FA6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA6E4u;
label_1fa6e4:
    // 0x1fa6e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa6e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fa6e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fa6ec: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fa6ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1fa6f0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa6f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa6f8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1fa6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fa6fc: 0x27a200cf  addiu       $v0, $sp, 0xCF
    ctx->pc = 0x1fa6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 207));
    // 0x1fa700: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1fa700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa704: 0xc07ee2c  jal         func_1FB8B0
    ctx->pc = 0x1FA704u;
    SET_GPR_U32(ctx, 31, 0x1FA70Cu);
    ctx->pc = 0x1FB8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB8B0u, 0x1FA704u, 0x1FA70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA70Cu;
label_1fa70c:
    // 0x1fa70c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa710: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1fa710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1fa714: 0x24428c50  addiu       $v0, $v0, -0x73B0
    ctx->pc = 0x1fa714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937680));
    // 0x1fa718: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa71c: 0xc0ac004  jal         func_2B0010
    ctx->pc = 0x1FA71Cu;
    SET_GPR_U32(ctx, 31, 0x1FA724u);
    ctx->pc = 0x2B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0010u, 0x1FA71Cu, 0x1FA724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA724u;
label_1fa724:
    // 0x1fa724: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa728: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1fa728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa72c: 0xac440060  sw          $a0, 0x60($v0)
    ctx->pc = 0x1fa72cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 4));
    // 0x1fa730: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1fa730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa734: 0x8c8200ec  lw          $v0, 0xEC($a0)
    ctx->pc = 0x1fa734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x1fa738: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1fa738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa73c: 0x8c9700f0  lw          $s7, 0xF0($a0)
    ctx->pc = 0x1fa73cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1fa740: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1fa740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fa744: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1fa744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1fa748: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fa748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa74c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1fa74cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa750: 0xc07f3d8  jal         func_1FCF60
    ctx->pc = 0x1FA750u;
    SET_GPR_U32(ctx, 31, 0x1FA758u);
    ctx->pc = 0x1FCF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCF60u, 0x1FA750u, 0x1FA758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA758u;
label_1fa758:
    // 0x1fa758: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fa758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa75c: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1fa75cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa760: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1fa760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fa764: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1fa764u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fa768: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1fa768u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fa76c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1fa76cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fa770: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1fa770u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fa774: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1fa774u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fa778: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1fa778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa77c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fa77cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa780: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fa780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa784: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1fa784u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1fa788: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA790u;
    // 0x1fa790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fa790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fa794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fa794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fa798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fa798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fa79c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1fa79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1fa7a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1fa7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa7a4: 0xc07f814  jal         func_1FE050
    ctx->pc = 0x1FA7A4u;
    SET_GPR_U32(ctx, 31, 0x1FA7ACu);
    ctx->pc = 0x1FE050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE050u, 0x1FA7A4u, 0x1FA7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA7ACu;
label_1fa7ac:
    // 0x1fa7ac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1fa7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa7b0: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1fa7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1fa7b4: 0xc056144  jal         func_158510
    ctx->pc = 0x1FA7B4u;
    SET_GPR_U32(ctx, 31, 0x1FA7BCu);
    ctx->pc = 0x158510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158510u, 0x1FA7B4u, 0x1FA7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA7BCu;
label_1fa7bc:
    // 0x1fa7bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fa7bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa7c0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1fa7c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1fa7c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1FA7C4u;
    {
        const bool branch_taken_0x1fa7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa7c4) {
            ctx->pc = 0x1FA7F8u;
            goto label_1fa7f8;
        }
    }
    ctx->pc = 0x1FA7CCu;
label_1fa7cc:
    // 0x1fa7cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1fa7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa7d0: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1fa7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1fa7d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fa7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa7d8: 0xc07ea18  jal         func_1FA860
    ctx->pc = 0x1FA7D8u;
    SET_GPR_U32(ctx, 31, 0x1FA7E0u);
    ctx->pc = 0x1FA860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA860u, 0x1FA7D8u, 0x1FA7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA7E0u;
label_1fa7e0:
    // 0x1fa7e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1fa7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa7e4: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1fa7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1fa7e8: 0xc056144  jal         func_158510
    ctx->pc = 0x1FA7E8u;
    SET_GPR_U32(ctx, 31, 0x1FA7F0u);
    ctx->pc = 0x158510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158510u, 0x1FA7E8u, 0x1FA7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA7F0u;
label_1fa7f0:
    // 0x1fa7f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fa7f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa7f4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1fa7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1fa7f8:
    // 0x1fa7f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1fa7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa7fc: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1fa7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1fa800: 0xc05613c  jal         func_1584F0
    ctx->pc = 0x1FA800u;
    SET_GPR_U32(ctx, 31, 0x1FA808u);
    ctx->pc = 0x1584F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584F0u, 0x1FA800u, 0x1FA808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA808u;
label_1fa808:
    // 0x1fa808: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1FA808u;
    {
        const bool branch_taken_0x1fa808 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fa808) {
            ctx->pc = 0x1FA7CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa7cc;
        }
    }
    ctx->pc = 0x1FA810u;
    // 0x1fa810: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1fa810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1fa814: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fa814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa818: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fa818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa81c: 0xc08f740  jal         func_23DD00
    ctx->pc = 0x1FA81Cu;
    SET_GPR_U32(ctx, 31, 0x1FA824u);
    ctx->pc = 0x23DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DD00u, 0x1FA81Cu, 0x1FA824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA824u;
label_1fa824:
    // 0x1fa824: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1fa824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa828: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1fa828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1fa82c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fa82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa830: 0xc0ac13c  jal         func_2B04F0
    ctx->pc = 0x1FA830u;
    SET_GPR_U32(ctx, 31, 0x1FA838u);
    ctx->pc = 0x2B04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04F0u, 0x1FA830u, 0x1FA838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA838u;
label_1fa838:
    // 0x1fa838: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1fa838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa83c: 0xc064adc  jal         func_192B70
    ctx->pc = 0x1FA83Cu;
    SET_GPR_U32(ctx, 31, 0x1FA844u);
    ctx->pc = 0x192B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B70u, 0x1FA83Cu, 0x1FA844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA844u;
label_1fa844:
    // 0x1fa844: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fa844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa848: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fa848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa84c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1fa84cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fa850: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA858u;
    // 0x1fa858: 0x0  nop
    ctx->pc = 0x1fa858u;
    // NOP
    // 0x1fa85c: 0x0  nop
    ctx->pc = 0x1fa85cu;
    // NOP
    ctx->pc = 0x1fa860u;
}

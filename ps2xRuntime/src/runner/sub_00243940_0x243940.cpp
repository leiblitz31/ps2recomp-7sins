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

// Function: sub_00243940
// Address: 0x243940 - 0x243c30
void sub_00243940_0x243940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243940_0x243940");
#endif

    switch (ctx->pc) {
        case 0x24395cu: goto label_24395c;
        case 0x2439e8u: goto label_2439e8;
        case 0x243a4cu: goto label_243a4c;
        case 0x243a6cu: goto label_243a6c;
        case 0x243a9cu: goto label_243a9c;
        case 0x243aa8u: goto label_243aa8;
        case 0x243aecu: goto label_243aec;
        case 0x243b00u: goto label_243b00;
        case 0x243b50u: goto label_243b50;
        case 0x243b9cu: goto label_243b9c;
        case 0x243bb8u: goto label_243bb8;
        case 0x243bccu: goto label_243bcc;
        case 0x243be4u: goto label_243be4;
        case 0x243c00u: goto label_243c00;
        default: break;
    }

    ctx->pc = 0x243940u;

    // 0x243940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x243940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x243944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243948: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x243948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24394c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x24394cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243950: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x243950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x243954: 0xc091174  jal         func_2445D0
    ctx->pc = 0x243954u;
    SET_GPR_U32(ctx, 31, 0x24395Cu);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x243954u, 0x24395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24395Cu;
label_24395c:
    // 0x24395c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x24395cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x243960: 0x24635710  addiu       $v1, $v1, 0x5710
    ctx->pc = 0x243960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22288));
    // 0x243964: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x243964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243968: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x243968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24396c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24396cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243970: 0xa0400034  sb          $zero, 0x34($v0)
    ctx->pc = 0x243970u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x243974: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x243974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243978: 0xa0400035  sb          $zero, 0x35($v0)
    ctx->pc = 0x243978u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 53), (uint8_t)GPR_U32(ctx, 0));
    // 0x24397c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24397cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243980: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x243980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243984: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x243984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x243988: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x243988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24398c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24398cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243990: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x243990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x243994: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x243994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x243998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24399c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24399cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2439a0: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2439a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2439a4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2439a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2439a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2439a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2439ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2439acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2439b0: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2439b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2439b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2439b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2439b8: 0xa0400048  sb          $zero, 0x48($v0)
    ctx->pc = 0x2439b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x2439bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2439bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2439c0: 0xa0400049  sb          $zero, 0x49($v0)
    ctx->pc = 0x2439c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 73), (uint8_t)GPR_U32(ctx, 0));
    // 0x2439c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2439c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2439c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2439c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2439cc: 0xa043004a  sb          $v1, 0x4A($v0)
    ctx->pc = 0x2439ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 74), (uint8_t)GPR_U32(ctx, 3));
    // 0x2439d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2439d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2439d4: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x2439d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x2439d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2439d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2439dc: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2439dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2439e0: 0xc094df0  jal         func_2537C0
    ctx->pc = 0x2439E0u;
    SET_GPR_U32(ctx, 31, 0x2439E8u);
    ctx->pc = 0x2537C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2537C0u, 0x2439E0u, 0x2439E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2439E8u;
label_2439e8:
    // 0x2439e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2439e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2439ec: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x2439ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x2439f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2439f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2439f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2439f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2439f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2439f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2439fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2439FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2439FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243A04u;
    // 0x243a04: 0x0  nop
    ctx->pc = 0x243a04u;
    // NOP
    // 0x243a08: 0x0  nop
    ctx->pc = 0x243a08u;
    // NOP
    // 0x243a0c: 0x0  nop
    ctx->pc = 0x243a0cu;
    // NOP
    // 0x243a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x243a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x243a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243a18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x243a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x243a1c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x243a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x243a20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x243a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243a24: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x243A24u;
    {
        const bool branch_taken_0x243a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243a24) {
            ctx->pc = 0x243A6Cu;
            goto label_243a6c;
        }
    }
    ctx->pc = 0x243A2Cu;
    // 0x243a2c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x243a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x243a30: 0x24635710  addiu       $v1, $v1, 0x5710
    ctx->pc = 0x243a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22288));
    // 0x243a34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x243a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243a38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x243a38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x243a3c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x243a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243a40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x243a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243a44: 0xc091188  jal         func_244620
    ctx->pc = 0x243A44u;
    SET_GPR_U32(ctx, 31, 0x243A4Cu);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x243A44u, 0x243A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243A4Cu;
label_243a4c:
    // 0x243a4c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x243a4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243a50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x243a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x243a54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x243a54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x243a58: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x243A58u;
    {
        const bool branch_taken_0x243a58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x243a58) {
            ctx->pc = 0x243A6Cu;
            goto label_243a6c;
        }
    }
    ctx->pc = 0x243A60u;
    // 0x243a60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x243a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243a64: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x243A64u;
    SET_GPR_U32(ctx, 31, 0x243A6Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x243A64u, 0x243A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243A6Cu;
label_243a6c:
    // 0x243a6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x243a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243a74: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x243a74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x243a78: 0x3e00008  jr          $ra
    ctx->pc = 0x243A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243A80u;
    // 0x243a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x243a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x243a84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x243a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x243a88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x243a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x243a8c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x243a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x243a90: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x243a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243a94: 0xc0911a4  jal         func_244690
    ctx->pc = 0x243A94u;
    SET_GPR_U32(ctx, 31, 0x243A9Cu);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x243A94u, 0x243A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243A9Cu;
label_243a9c:
    // 0x243a9c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x243a9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x243aa0: 0xc1067b0  jal         func_419EC0
    ctx->pc = 0x243AA0u;
    SET_GPR_U32(ctx, 31, 0x243AA8u);
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x243AA0u, 0x243AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243AA8u;
label_243aa8:
    // 0x243aa8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x243aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243aac: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x243aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x243ab0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x243ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243ab4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x243ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243ab8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x243ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243abc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x243abcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x243ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x243AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243AC8u;
    // 0x243ac8: 0x0  nop
    ctx->pc = 0x243ac8u;
    // NOP
    // 0x243acc: 0x0  nop
    ctx->pc = 0x243accu;
    // NOP
    // 0x243ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x243ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x243ad4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x243ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x243ad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x243ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x243adc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x243adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x243ae0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x243ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243ae4: 0xc0911bc  jal         func_2446F0
    ctx->pc = 0x243AE4u;
    SET_GPR_U32(ctx, 31, 0x243AECu);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x243AE4u, 0x243AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243AECu;
label_243aec:
    // 0x243aec: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x243aecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x243af0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x243af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243af4: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x243af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x243af8: 0xc1067c6  jal         func_419F18
    ctx->pc = 0x243AF8u;
    SET_GPR_U32(ctx, 31, 0x243B00u);
    ctx->pc = 0x419F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419F18u, 0x243AF8u, 0x243B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B00u;
label_243b00:
    // 0x243b00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x243b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243b04: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x243b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x243b08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x243b08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243b0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x243b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243b10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x243b10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243b14: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x243b14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x243b18: 0x3e00008  jr          $ra
    ctx->pc = 0x243B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243B20u;
    // 0x243b20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x243b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x243b24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x243b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x243b28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x243b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x243b2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x243b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x243b30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x243b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x243b34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x243b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x243b38: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x243b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x243b3c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x243b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x243b40: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x243b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243b44: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x243b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x243b48: 0xc0911dc  jal         func_244770
    ctx->pc = 0x243B48u;
    SET_GPR_U32(ctx, 31, 0x243B50u);
    ctx->pc = 0x244770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244770u, 0x243B48u, 0x243B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B50u;
label_243b50:
    // 0x243b50: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x243b50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x243b54: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x243b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x243b58: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x243b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x243b5c: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x243B5Cu;
    {
        const bool branch_taken_0x243b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x243b5c) {
            ctx->pc = 0x243B74u;
            goto label_243b74;
        }
    }
    ctx->pc = 0x243B64u;
    // 0x243b64: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x243b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x243b68: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x243b68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x243b6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x243B6Cu;
    {
        const bool branch_taken_0x243b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243b6c) {
            ctx->pc = 0x243B7Cu;
            goto label_243b7c;
        }
    }
    ctx->pc = 0x243B74u;
label_243b74:
    // 0x243b74: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x243b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x243b78: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x243b78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_243b7c:
    // 0x243b7c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x243b7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243b80: 0x10100021  beq         $zero, $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x243B80u;
    {
        const bool branch_taken_0x243b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x243b80) {
            ctx->pc = 0x243C08u;
            goto label_243c08;
        }
    }
    ctx->pc = 0x243B88u;
    // 0x243b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243b8c: 0x24050401  addiu       $a1, $zero, 0x401
    ctx->pc = 0x243b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x243b90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x243b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243b94: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x243B94u;
    SET_GPR_U32(ctx, 31, 0x243B9Cu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x243B94u, 0x243B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B9Cu;
label_243b9c:
    // 0x243b9c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x243b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243ba0: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x243ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x243ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243ba8: 0x240503fe  addiu       $a1, $zero, 0x3FE
    ctx->pc = 0x243ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1022));
    // 0x243bac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x243bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x243bb0: 0xc042080  jal         func_108200
    ctx->pc = 0x243BB0u;
    SET_GPR_U32(ctx, 31, 0x243BB8u);
    ctx->pc = 0x108200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108200u, 0x243BB0u, 0x243BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243BB8u;
label_243bb8:
    // 0x243bb8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x243bb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243bbc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x243bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243bc0: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x243bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x243bc4: 0xc090f0c  jal         func_243C30
    ctx->pc = 0x243BC4u;
    SET_GPR_U32(ctx, 31, 0x243BCCu);
    ctx->pc = 0x243C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C30u, 0x243BC4u, 0x243BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243BCCu;
label_243bcc:
    // 0x243bcc: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x243bccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x243bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243bd4: 0x24050406  addiu       $a1, $zero, 0x406
    ctx->pc = 0x243bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1030));
    // 0x243bd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x243bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243bdc: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x243BDCu;
    SET_GPR_U32(ctx, 31, 0x243BE4u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x243BDCu, 0x243BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243BE4u;
label_243be4:
    // 0x243be4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x243be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243be8: 0xa0620048  sb          $v0, 0x48($v1)
    ctx->pc = 0x243be8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 72), (uint8_t)GPR_U32(ctx, 2));
    // 0x243bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243bf0: 0x240503ff  addiu       $a1, $zero, 0x3FF
    ctx->pc = 0x243bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x243bf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x243bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243bf8: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x243BF8u;
    SET_GPR_U32(ctx, 31, 0x243C00u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x243BF8u, 0x243C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C00u;
label_243c00:
    // 0x243c00: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x243c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243c04: 0xa0620049  sb          $v0, 0x49($v1)
    ctx->pc = 0x243c04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 73), (uint8_t)GPR_U32(ctx, 2));
label_243c08:
    // 0x243c08: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x243c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243c0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x243c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x243c10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x243c10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243c14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x243c14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243c18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x243c18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243c1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x243c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243c20: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x243c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x243c24: 0x3e00008  jr          $ra
    ctx->pc = 0x243C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243C2Cu;
    // 0x243c2c: 0x0  nop
    ctx->pc = 0x243c2cu;
    // NOP
    ctx->pc = 0x243c30u;
}

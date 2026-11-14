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

// Function: sub_00210930
// Address: 0x210930 - 0x210990
void sub_00210930_0x210930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210930_0x210930");
#endif

    switch (ctx->pc) {
        case 0x21094cu: goto label_21094c;
        case 0x21095cu: goto label_21095c;
        default: break;
    }

    ctx->pc = 0x210930u;

    // 0x210930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x210930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x210934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x210934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x210938: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x210938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21093c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21093cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210940: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x210940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x210944: 0xc084504  jal         func_211410
    ctx->pc = 0x210944u;
    SET_GPR_U32(ctx, 31, 0x21094Cu);
    ctx->pc = 0x211410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211410u, 0x210944u, 0x21094Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21094Cu;
label_21094c:
    // 0x21094c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21094cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210950: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x210950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x210954: 0xc084264  jal         func_210990
    ctx->pc = 0x210954u;
    SET_GPR_U32(ctx, 31, 0x21095Cu);
    ctx->pc = 0x210990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210990u, 0x210954u, 0x21095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21095Cu;
label_21095c:
    // 0x21095c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21095cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210960: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x210960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210964: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x210964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x210968: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x210968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21096c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x21096cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x210970: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x210970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x210974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210978: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x210978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21097c: 0x3e00008  jr          $ra
    ctx->pc = 0x21097Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21097Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210984u;
    // 0x210984: 0x0  nop
    ctx->pc = 0x210984u;
    // NOP
    // 0x210988: 0x0  nop
    ctx->pc = 0x210988u;
    // NOP
    // 0x21098c: 0x0  nop
    ctx->pc = 0x21098cu;
    // NOP
    ctx->pc = 0x210990u;
}

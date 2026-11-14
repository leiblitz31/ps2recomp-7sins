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

// Function: sub_00459220
// Address: 0x459220 - 0x459270
void sub_00459220_0x459220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459220_0x459220");
#endif

    switch (ctx->pc) {
        case 0x459240u: goto label_459240;
        case 0x459254u: goto label_459254;
        default: break;
    }

    ctx->pc = 0x459220u;

    // 0x459220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x459220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x459224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x459224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x459228: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x459228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x45922c: 0xfc4043d0  sd          $zero, 0x43D0($v0)
    ctx->pc = 0x45922cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6243D0u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x6243D0u, _value); } while (0);
    // 0x459230: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x459230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x459234: 0x248491c0  addiu       $a0, $a0, -0x6E40
    ctx->pc = 0x459234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939072));
    // 0x459238: 0xc0bf50c  jal         func_2FD430
    ctx->pc = 0x459238u;
    SET_GPR_U32(ctx, 31, 0x459240u);
    ctx->pc = 0x2FD430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD430u, 0x459238u, 0x459240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459240u;
label_459240:
    // 0x459240: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x459240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x459244: 0x2484e7d0  addiu       $a0, $a0, -0x1830
    ctx->pc = 0x459244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961104));
    // 0x459248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x459248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45924c: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x45924Cu;
    SET_GPR_U32(ctx, 31, 0x459254u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x45924Cu, 0x459254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459254u;
label_459254:
    // 0x459254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x459254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x459258: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x459258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x45925c: 0x3e00008  jr          $ra
    ctx->pc = 0x45925Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45925Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x459264u;
    // 0x459264: 0x0  nop
    ctx->pc = 0x459264u;
    // NOP
    // 0x459268: 0x0  nop
    ctx->pc = 0x459268u;
    // NOP
    // 0x45926c: 0x0  nop
    ctx->pc = 0x45926cu;
    // NOP
    ctx->pc = 0x459270u;
}

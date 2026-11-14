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

// Function: sub_00103940
// Address: 0x103940 - 0x103980
void sub_00103940_0x103940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103940_0x103940");
#endif

    switch (ctx->pc) {
        case 0x103940u: goto label_103940;
        case 0x103944u: goto label_103944;
        case 0x103948u: goto label_103948;
        case 0x10394cu: goto label_10394c;
        case 0x103950u: goto label_103950;
        case 0x103954u: goto label_103954;
        case 0x103958u: goto label_103958;
        case 0x10395cu: goto label_10395c;
        case 0x103960u: goto label_103960;
        case 0x103964u: goto label_103964;
        case 0x103968u: goto label_103968;
        case 0x10396cu: goto label_10396c;
        case 0x103970u: goto label_103970;
        case 0x103974u: goto label_103974;
        case 0x103978u: goto label_103978;
        case 0x10397cu: goto label_10397c;
        default: break;
    }

    ctx->pc = 0x103940u;

label_103940:
    // 0x103940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x103940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_103944:
    // 0x103944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x103944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_103948:
    // 0x103948: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x103948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_10394c:
    // 0x10394c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10394cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_103950:
    // 0x103950: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x103950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_103954:
    // 0x103954: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103958:
    // 0x103958: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x103958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_10395c:
    // 0x10395c: 0x320f809  jalr        $t9
label_103960:
    if (ctx->pc == 0x103960u) {
        ctx->pc = 0x103964u;
        goto label_103964;
    }
    ctx->pc = 0x10395Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103964u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10395Cu, 0x103964u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103964u;
label_103964:
    // 0x103964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x103964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_103968:
    // 0x103968: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x103968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_10396c:
    // 0x10396c: 0x3e00008  jr          $ra
label_103970:
    if (ctx->pc == 0x103970u) {
        ctx->pc = 0x103974u;
        goto label_103974;
    }
    ctx->pc = 0x10396Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10396Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103974u;
label_103974:
    // 0x103974: 0x0  nop
    ctx->pc = 0x103974u;
    // NOP
label_103978:
    // 0x103978: 0x0  nop
    ctx->pc = 0x103978u;
    // NOP
label_10397c:
    // 0x10397c: 0x0  nop
    ctx->pc = 0x10397cu;
    // NOP
    ctx->pc = 0x103980u;
}

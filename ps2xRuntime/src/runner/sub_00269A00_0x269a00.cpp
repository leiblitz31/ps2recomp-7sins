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

// Function: sub_00269A00
// Address: 0x269a00 - 0x269a40
void sub_00269A00_0x269a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269A00_0x269a00");
#endif

    switch (ctx->pc) {
        case 0x269a00u: goto label_269a00;
        case 0x269a04u: goto label_269a04;
        case 0x269a08u: goto label_269a08;
        case 0x269a0cu: goto label_269a0c;
        case 0x269a10u: goto label_269a10;
        case 0x269a14u: goto label_269a14;
        case 0x269a18u: goto label_269a18;
        case 0x269a1cu: goto label_269a1c;
        case 0x269a20u: goto label_269a20;
        case 0x269a24u: goto label_269a24;
        case 0x269a28u: goto label_269a28;
        case 0x269a2cu: goto label_269a2c;
        case 0x269a30u: goto label_269a30;
        case 0x269a34u: goto label_269a34;
        case 0x269a38u: goto label_269a38;
        case 0x269a3cu: goto label_269a3c;
        default: break;
    }

    ctx->pc = 0x269a00u;

label_269a00:
    // 0x269a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x269a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_269a04:
    // 0x269a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x269a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_269a08:
    // 0x269a08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x269a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_269a0c:
    // 0x269a0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x269a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_269a10:
    // 0x269a10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x269a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_269a14:
    // 0x269a14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x269a14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_269a18:
    // 0x269a18: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x269a18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_269a1c:
    // 0x269a1c: 0x320f809  jalr        $t9
label_269a20:
    if (ctx->pc == 0x269A20u) {
        ctx->pc = 0x269A24u;
        goto label_269a24;
    }
    ctx->pc = 0x269A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x269A24u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269A1Cu, 0x269A24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x269A24u;
label_269a24:
    // 0x269a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x269a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_269a28:
    // 0x269a28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x269a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_269a2c:
    // 0x269a2c: 0x3e00008  jr          $ra
label_269a30:
    if (ctx->pc == 0x269A30u) {
        ctx->pc = 0x269A34u;
        goto label_269a34;
    }
    ctx->pc = 0x269A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269A34u;
label_269a34:
    // 0x269a34: 0x0  nop
    ctx->pc = 0x269a34u;
    // NOP
label_269a38:
    // 0x269a38: 0x0  nop
    ctx->pc = 0x269a38u;
    // NOP
label_269a3c:
    // 0x269a3c: 0x0  nop
    ctx->pc = 0x269a3cu;
    // NOP
    ctx->pc = 0x269a40u;
}

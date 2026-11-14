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

// Function: sub_0016BDB0
// Address: 0x16bdb0 - 0x16be10
void sub_0016BDB0_0x16bdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BDB0_0x16bdb0");
#endif

    switch (ctx->pc) {
        case 0x16bdb0u: goto label_16bdb0;
        case 0x16bdb4u: goto label_16bdb4;
        case 0x16bdb8u: goto label_16bdb8;
        case 0x16bdbcu: goto label_16bdbc;
        case 0x16bdc0u: goto label_16bdc0;
        case 0x16bdc4u: goto label_16bdc4;
        case 0x16bdc8u: goto label_16bdc8;
        case 0x16bdccu: goto label_16bdcc;
        case 0x16bdd0u: goto label_16bdd0;
        case 0x16bdd4u: goto label_16bdd4;
        case 0x16bdd8u: goto label_16bdd8;
        case 0x16bddcu: goto label_16bddc;
        case 0x16bde0u: goto label_16bde0;
        case 0x16bde4u: goto label_16bde4;
        case 0x16bde8u: goto label_16bde8;
        case 0x16bdecu: goto label_16bdec;
        case 0x16bdf0u: goto label_16bdf0;
        case 0x16bdf4u: goto label_16bdf4;
        case 0x16bdf8u: goto label_16bdf8;
        case 0x16bdfcu: goto label_16bdfc;
        case 0x16be00u: goto label_16be00;
        case 0x16be04u: goto label_16be04;
        case 0x16be08u: goto label_16be08;
        case 0x16be0cu: goto label_16be0c;
        default: break;
    }

    ctx->pc = 0x16bdb0u;

label_16bdb0:
    // 0x16bdb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16bdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16bdb4:
    // 0x16bdb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16bdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16bdb8:
    // 0x16bdb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16bdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16bdbc:
    // 0x16bdbc: 0xc05548c  jal         func_155230
label_16bdc0:
    if (ctx->pc == 0x16BDC0u) {
        ctx->pc = 0x16BDC4u;
        goto label_16bdc4;
    }
    ctx->pc = 0x16BDBCu;
    SET_GPR_U32(ctx, 31, 0x16BDC4u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x16BDBCu, 0x16BDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BDC4u;
label_16bdc4:
    // 0x16bdc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16bdc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16bdc8:
    // 0x16bdc8: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x16bdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_16bdcc:
    // 0x16bdcc: 0xc0553d4  jal         func_154F50
label_16bdd0:
    if (ctx->pc == 0x16BDD0u) {
        ctx->pc = 0x16BDD4u;
        goto label_16bdd4;
    }
    ctx->pc = 0x16BDCCu;
    SET_GPR_U32(ctx, 31, 0x16BDD4u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x16BDCCu, 0x16BDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BDD4u;
label_16bdd4:
    // 0x16bdd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16bdd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16bdd8:
    // 0x16bdd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16bdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16bddc:
    // 0x16bddc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16bddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16bde0:
    // 0x16bde0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16bde0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16bde4:
    // 0x16bde4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16bde4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16bde8:
    // 0x16bde8: 0x320f809  jalr        $t9
label_16bdec:
    if (ctx->pc == 0x16BDECu) {
        ctx->pc = 0x16BDF0u;
        goto label_16bdf0;
    }
    ctx->pc = 0x16BDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16BDF0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BDE8u, 0x16BDF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16BDF0u;
label_16bdf0:
    // 0x16bdf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16bdf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16bdf4:
    // 0x16bdf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16bdf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16bdf8:
    // 0x16bdf8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16bdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_16bdfc:
    // 0x16bdfc: 0x3e00008  jr          $ra
label_16be00:
    if (ctx->pc == 0x16BE00u) {
        ctx->pc = 0x16BE04u;
        goto label_16be04;
    }
    ctx->pc = 0x16BDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BE04u;
label_16be04:
    // 0x16be04: 0x0  nop
    ctx->pc = 0x16be04u;
    // NOP
label_16be08:
    // 0x16be08: 0x0  nop
    ctx->pc = 0x16be08u;
    // NOP
label_16be0c:
    // 0x16be0c: 0x0  nop
    ctx->pc = 0x16be0cu;
    // NOP
    ctx->pc = 0x16be10u;
}

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

// Function: sub_002CEF00
// Address: 0x2cef00 - 0x2cefe0
void sub_002CEF00_0x2cef00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEF00_0x2cef00");
#endif

    switch (ctx->pc) {
        case 0x2cef24u: goto label_2cef24;
        case 0x2cef34u: goto label_2cef34;
        case 0x2cef44u: goto label_2cef44;
        case 0x2cef54u: goto label_2cef54;
        case 0x2cef78u: goto label_2cef78;
        case 0x2cef98u: goto label_2cef98;
        case 0x2cefb0u: goto label_2cefb0;
        default: break;
    }

    ctx->pc = 0x2cef00u;

    // 0x2cef00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cef00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2cef04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cef04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cef08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cef08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2cef0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cef0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cef10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cef10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cef14: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2cef14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2cef18: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2cef18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cef1c: 0xc09b618  jal         func_26D860
    ctx->pc = 0x2CEF1Cu;
    SET_GPR_U32(ctx, 31, 0x2CEF24u);
    ctx->pc = 0x26D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D860u, 0x2CEF1Cu, 0x2CEF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEF24u;
label_2cef24:
    // 0x2cef24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cef24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cef28: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2cef28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cef2c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2CEF2Cu;
    {
        const bool branch_taken_0x2cef2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cef2c) {
            ctx->pc = 0x2CEFA4u;
            goto label_2cefa4;
        }
    }
    ctx->pc = 0x2CEF34u;
label_2cef34:
    // 0x2cef34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cef34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cef38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cef38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cef3c: 0xc09a0e8  jal         func_2683A0
    ctx->pc = 0x2CEF3Cu;
    SET_GPR_U32(ctx, 31, 0x2CEF44u);
    ctx->pc = 0x2683A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2683A0u, 0x2CEF3Cu, 0x2CEF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEF44u;
label_2cef44:
    // 0x2cef44: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2cef44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cef48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cef48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cef4c: 0xc09ce4c  jal         func_273930
    ctx->pc = 0x2CEF4Cu;
    SET_GPR_U32(ctx, 31, 0x2CEF54u);
    ctx->pc = 0x273930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273930u, 0x2CEF4Cu, 0x2CEF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEF54u;
label_2cef54:
    // 0x2cef54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cef54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cef58: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CEF58u;
    {
        const bool branch_taken_0x2cef58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cef58) {
            ctx->pc = 0x2CEFA0u;
            goto label_2cefa0;
        }
    }
    ctx->pc = 0x2CEF60u;
    // 0x2cef60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cef60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cef64: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2cef64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2cef68: 0x24a5e330  addiu       $a1, $a1, -0x1CD0
    ctx->pc = 0x2cef68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959920));
    // 0x2cef6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cef6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cef70: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x2CEF70u;
    SET_GPR_U32(ctx, 31, 0x2CEF78u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x2CEF70u, 0x2CEF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEF78u;
label_2cef78:
    // 0x2cef78: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CEF78u;
    {
        const bool branch_taken_0x2cef78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cef78) {
            ctx->pc = 0x2CEFA0u;
            goto label_2cefa0;
        }
    }
    ctx->pc = 0x2CEF80u;
    // 0x2cef80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cef80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cef84: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2cef84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2cef88: 0x24a5e348  addiu       $a1, $a1, -0x1CB8
    ctx->pc = 0x2cef88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959944));
    // 0x2cef8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cef8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cef90: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2CEF90u;
    SET_GPR_U32(ctx, 31, 0x2CEF98u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2CEF90u, 0x2CEF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEF98u;
label_2cef98:
    // 0x2cef98: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CEF98u;
    {
        const bool branch_taken_0x2cef98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cef98) {
            ctx->pc = 0x2CEFC0u;
            goto label_2cefc0;
        }
    }
    ctx->pc = 0x2CEFA0u;
label_2cefa0:
    // 0x2cefa0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cefa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2cefa4:
    // 0x2cefa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cefa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cefa8: 0xc099d1c  jal         func_267470
    ctx->pc = 0x2CEFA8u;
    SET_GPR_U32(ctx, 31, 0x2CEFB0u);
    ctx->pc = 0x267470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267470u, 0x2CEFA8u, 0x2CEFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEFB0u;
label_2cefb0:
    // 0x2cefb0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2cefb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cefb4: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2CEFB4u;
    {
        const bool branch_taken_0x2cefb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cefb4) {
            ctx->pc = 0x2CEF34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cef34;
        }
    }
    ctx->pc = 0x2CEFBCu;
    // 0x2cefbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cefbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cefc0:
    // 0x2cefc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cefc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cefc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cefc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cefc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cefc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cefcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cefccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cefd0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2cefd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2cefd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CEFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CEFDCu;
    // 0x2cefdc: 0x0  nop
    ctx->pc = 0x2cefdcu;
    // NOP
    ctx->pc = 0x2cefe0u;
}

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

// Function: sub_00229C90
// Address: 0x229c90 - 0x229d60
void sub_00229C90_0x229c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229C90_0x229c90");
#endif

    switch (ctx->pc) {
        case 0x229cbcu: goto label_229cbc;
        case 0x229cccu: goto label_229ccc;
        case 0x229d0cu: goto label_229d0c;
        case 0x229d34u: goto label_229d34;
        default: break;
    }

    ctx->pc = 0x229c90u;

    // 0x229c90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x229c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x229c94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x229c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x229c98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x229c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x229c9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x229c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x229ca0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x229ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x229ca4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x229ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x229ca8: 0xa3a50050  sb          $a1, 0x50($sp)
    ctx->pc = 0x229ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 5));
    // 0x229cac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x229cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229cb0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x229cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x229cb4: 0xc08a1a0  jal         func_228680
    ctx->pc = 0x229CB4u;
    SET_GPR_U32(ctx, 31, 0x229CBCu);
    ctx->pc = 0x228680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228680u, 0x229CB4u, 0x229CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229CBCu;
label_229cbc:
    // 0x229cbc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x229cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229cc0: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x229cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x229cc4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x229CC4u;
    {
        const bool branch_taken_0x229cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229cc4) {
            ctx->pc = 0x229D1Cu;
            goto label_229d1c;
        }
    }
    ctx->pc = 0x229CCCu;
label_229ccc:
    // 0x229ccc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x229cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229cd0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x229cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229cd4: 0x8c500028  lw          $s0, 0x28($v0)
    ctx->pc = 0x229cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x229cd8: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x229cd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x229cdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x229CDCu;
    {
        const bool branch_taken_0x229cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229cdc) {
            ctx->pc = 0x229CF0u;
            goto label_229cf0;
        }
    }
    ctx->pc = 0x229CE4u;
    // 0x229ce4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x229ce4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229ce8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x229CE8u;
    {
        const bool branch_taken_0x229ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229ce8) {
            ctx->pc = 0x229CF4u;
            goto label_229cf4;
        }
    }
    ctx->pc = 0x229CF0u;
label_229cf0:
    // 0x229cf0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x229cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229cf4:
    // 0x229cf4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x229cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x229cf8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x229cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x229cfc: 0x24a56e50  addiu       $a1, $a1, 0x6E50
    ctx->pc = 0x229cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28240));
    // 0x229d00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x229d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229d04: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x229D04u;
    SET_GPR_U32(ctx, 31, 0x229D0Cu);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x229D04u, 0x229D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D0Cu;
label_229d0c:
    // 0x229d0c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x229d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229d10: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x229d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x229d14: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x229d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x229d18: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x229d18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_229d1c:
    // 0x229d1c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x229d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229d20: 0x8c520028  lw          $s2, 0x28($v0)
    ctx->pc = 0x229d20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x229d24: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x229d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x229d28: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x229d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x229d2c: 0xc08a118  jal         func_228460
    ctx->pc = 0x229D2Cu;
    SET_GPR_U32(ctx, 31, 0x229D34u);
    ctx->pc = 0x228460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228460u, 0x229D2Cu, 0x229D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229D34u;
label_229d34:
    // 0x229d34: 0x1642ffe5  bne         $s2, $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x229D34u;
    {
        const bool branch_taken_0x229d34 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x229d34) {
            ctx->pc = 0x229CCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229ccc;
        }
    }
    ctx->pc = 0x229D3Cu;
    // 0x229d3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x229d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229d40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x229d40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229d44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x229d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229d48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x229d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229d4c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x229d4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x229d50: 0x3e00008  jr          $ra
    ctx->pc = 0x229D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229D58u;
    // 0x229d58: 0x0  nop
    ctx->pc = 0x229d58u;
    // NOP
    // 0x229d5c: 0x0  nop
    ctx->pc = 0x229d5cu;
    // NOP
    ctx->pc = 0x229d60u;
}

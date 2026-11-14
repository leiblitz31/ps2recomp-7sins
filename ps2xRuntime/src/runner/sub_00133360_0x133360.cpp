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

// Function: sub_00133360
// Address: 0x133360 - 0x1333f0
void sub_00133360_0x133360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133360_0x133360");
#endif

    switch (ctx->pc) {
        case 0x133398u: goto label_133398;
        case 0x1333a8u: goto label_1333a8;
        default: break;
    }

    ctx->pc = 0x133360u;

    // 0x133360: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x133360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x133364: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x133364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x133368: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13336c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13336cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x133370: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x133370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x133374: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x133374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x133378: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x133378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13337c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13337cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133380: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x133380u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x133384: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x133384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x133388: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x133388u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13338c: 0x8012  mflo        $s0
    ctx->pc = 0x13338cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x133390: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x133390u;
    {
        const bool branch_taken_0x133390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133390) {
            ctx->pc = 0x1333C4u;
            goto label_1333c4;
        }
    }
    ctx->pc = 0x133398u;
label_133398:
    // 0x133398: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x133398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13339c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x13339cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1333a0: 0xc04ccfc  jal         func_1333F0
    ctx->pc = 0x1333A0u;
    SET_GPR_U32(ctx, 31, 0x1333A8u);
    ctx->pc = 0x1333F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1333F0u, 0x1333A0u, 0x1333A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1333A8u;
label_1333a8:
    // 0x1333a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1333a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1333ac: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1333acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1333b0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1333b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1333b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1333b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1333b8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1333b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1333bc: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1333bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1333c0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1333c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1333c4:
    // 0x1333c4: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1333C4u;
    {
        const bool branch_taken_0x1333c4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1333c4) {
            ctx->pc = 0x133398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_133398;
        }
    }
    ctx->pc = 0x1333CCu;
    // 0x1333cc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1333ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1333d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1333d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1333d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1333d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1333d8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1333d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1333dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1333DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1333DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1333E4u;
    // 0x1333e4: 0x0  nop
    ctx->pc = 0x1333e4u;
    // NOP
    // 0x1333e8: 0x0  nop
    ctx->pc = 0x1333e8u;
    // NOP
    // 0x1333ec: 0x0  nop
    ctx->pc = 0x1333ecu;
    // NOP
    ctx->pc = 0x1333f0u;
}

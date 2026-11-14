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

// Function: sub_003C2040
// Address: 0x3c2040 - 0x3c20b0
void sub_003C2040_0x3c2040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2040_0x3c2040");
#endif

    switch (ctx->pc) {
        case 0x3c2040u: goto label_3c2040;
        case 0x3c2044u: goto label_3c2044;
        case 0x3c2048u: goto label_3c2048;
        case 0x3c204cu: goto label_3c204c;
        case 0x3c2050u: goto label_3c2050;
        case 0x3c2054u: goto label_3c2054;
        case 0x3c2058u: goto label_3c2058;
        case 0x3c205cu: goto label_3c205c;
        case 0x3c2060u: goto label_3c2060;
        case 0x3c2064u: goto label_3c2064;
        case 0x3c2068u: goto label_3c2068;
        case 0x3c206cu: goto label_3c206c;
        case 0x3c2070u: goto label_3c2070;
        case 0x3c2074u: goto label_3c2074;
        case 0x3c2078u: goto label_3c2078;
        case 0x3c207cu: goto label_3c207c;
        case 0x3c2080u: goto label_3c2080;
        case 0x3c2084u: goto label_3c2084;
        case 0x3c2088u: goto label_3c2088;
        case 0x3c208cu: goto label_3c208c;
        case 0x3c2090u: goto label_3c2090;
        case 0x3c2094u: goto label_3c2094;
        case 0x3c2098u: goto label_3c2098;
        case 0x3c209cu: goto label_3c209c;
        case 0x3c20a0u: goto label_3c20a0;
        case 0x3c20a4u: goto label_3c20a4;
        case 0x3c20a8u: goto label_3c20a8;
        case 0x3c20acu: goto label_3c20ac;
        default: break;
    }

    ctx->pc = 0x3c2040u;

label_3c2040:
    // 0x3c2040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c2040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3c2044:
    // 0x3c2044: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c2044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3c2048:
    // 0x3c2048: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c2048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3c204c:
    // 0x3c204c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c204cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c2050:
    // 0x3c2050: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3c2050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3c2054:
    // 0x3c2054: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3c2054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c2058:
    // 0x3c2058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c2058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c205c:
    // 0x3c205c: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x3c205cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
label_3c2060:
    // 0x3c2060: 0x2643e880  addiu       $v1, $s2, -0x1780
    ctx->pc = 0x3c2060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961280));
label_3c2064:
    // 0x3c2064: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3c2064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3c2068:
    // 0x3c2068: 0x40f809  jalr        $v0
label_3c206c:
    if (ctx->pc == 0x3C206Cu) {
        ctx->pc = 0x3C206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2068u;
        // 0x3c206c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2070u;
        goto label_3c2070;
    }
    ctx->pc = 0x3C2068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2070u);
        ctx->pc = 0x3C206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2068u;
        // 0x3c206c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2068u, 0x3C2070u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2070u;
label_3c2070:
    // 0x3c2070: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3c2070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3c2074:
    // 0x3c2074: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3c2078:
    if (ctx->pc == 0x3C2078u) {
        ctx->pc = 0x3C2078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2074u;
        // 0x3c2078: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C207Cu;
        goto label_3c207c;
    }
    ctx->pc = 0x3C2074u;
    {
        const bool branch_taken_0x3c2074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2074u;
        // 0x3c2078: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2074) {
            ctx->pc = 0x3C2094u;
            goto label_3c2094;
        }
    }
    ctx->pc = 0x3C207Cu;
label_3c207c:
    // 0x3c207c: 0x2404003a  addiu       $a0, $zero, 0x3A
    ctx->pc = 0x3c207cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_3c2080:
    // 0x3c2080: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3c2080u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3c2084:
    // 0x3c2084: 0x5464fff6  bnel        $v1, $a0, . + 4 + (-0xA << 2)
label_3c2088:
    if (ctx->pc == 0x3C2088u) {
        ctx->pc = 0x3C2088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2084u;
        // 0x3c2088: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C208Cu;
        goto label_3c208c;
    }
    ctx->pc = 0x3C2084u;
    {
        const bool branch_taken_0x3c2084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3c2084) {
            ctx->pc = 0x3C2088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2084u;
            // 0x3c2088: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2060;
        }
    }
    ctx->pc = 0x3C208Cu;
label_3c208c:
    // 0x3c208c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x3c208cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3c2090:
    // 0x3c2090: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3c2090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3c2094:
    // 0x3c2094: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c2094u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c2098:
    // 0x3c2098: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c2098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c209c:
    // 0x3c209c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c209cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c20a0:
    // 0x3c20a0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3c20a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c20a4:
    // 0x3c20a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c20a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c20a8:
    // 0x3c20a8: 0x3e00008  jr          $ra
label_3c20ac:
    if (ctx->pc == 0x3C20ACu) {
        ctx->pc = 0x3C20ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C20A8u;
        // 0x3c20ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C20B0u;
        goto label_fallthrough_0x3c20a8;
    }
    ctx->pc = 0x3C20A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C20ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C20A8u;
        // 0x3c20ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C20A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c20a8:
    ctx->pc = 0x3C20B0u;
}

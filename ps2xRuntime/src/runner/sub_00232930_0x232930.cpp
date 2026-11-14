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

// Function: sub_00232930
// Address: 0x232930 - 0x2329e0
void sub_00232930_0x232930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232930_0x232930");
#endif

    switch (ctx->pc) {
        case 0x232930u: goto label_232930;
        case 0x232934u: goto label_232934;
        case 0x232938u: goto label_232938;
        case 0x23293cu: goto label_23293c;
        case 0x232940u: goto label_232940;
        case 0x232944u: goto label_232944;
        case 0x232948u: goto label_232948;
        case 0x23294cu: goto label_23294c;
        case 0x232950u: goto label_232950;
        case 0x232954u: goto label_232954;
        case 0x232958u: goto label_232958;
        case 0x23295cu: goto label_23295c;
        case 0x232960u: goto label_232960;
        case 0x232964u: goto label_232964;
        case 0x232968u: goto label_232968;
        case 0x23296cu: goto label_23296c;
        case 0x232970u: goto label_232970;
        case 0x232974u: goto label_232974;
        case 0x232978u: goto label_232978;
        case 0x23297cu: goto label_23297c;
        case 0x232980u: goto label_232980;
        case 0x232984u: goto label_232984;
        case 0x232988u: goto label_232988;
        case 0x23298cu: goto label_23298c;
        case 0x232990u: goto label_232990;
        case 0x232994u: goto label_232994;
        case 0x232998u: goto label_232998;
        case 0x23299cu: goto label_23299c;
        case 0x2329a0u: goto label_2329a0;
        case 0x2329a4u: goto label_2329a4;
        case 0x2329a8u: goto label_2329a8;
        case 0x2329acu: goto label_2329ac;
        case 0x2329b0u: goto label_2329b0;
        case 0x2329b4u: goto label_2329b4;
        case 0x2329b8u: goto label_2329b8;
        case 0x2329bcu: goto label_2329bc;
        case 0x2329c0u: goto label_2329c0;
        case 0x2329c4u: goto label_2329c4;
        case 0x2329c8u: goto label_2329c8;
        case 0x2329ccu: goto label_2329cc;
        case 0x2329d0u: goto label_2329d0;
        case 0x2329d4u: goto label_2329d4;
        case 0x2329d8u: goto label_2329d8;
        case 0x2329dcu: goto label_2329dc;
        default: break;
    }

    ctx->pc = 0x232930u;

label_232930:
    // 0x232930: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x232930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_232934:
    // 0x232934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x232934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_232938:
    // 0x232938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x232938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23293c:
    // 0x23293c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23293cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_232940:
    // 0x232940: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x232940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_232944:
    // 0x232944: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x232944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_232948:
    // 0x232948: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23294c:
    if (ctx->pc == 0x23294Cu) {
        ctx->pc = 0x232950u;
        goto label_232950;
    }
    ctx->pc = 0x232948u;
    {
        const bool branch_taken_0x232948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232948) {
            ctx->pc = 0x232958u;
            goto label_232958;
        }
    }
    ctx->pc = 0x232950u;
label_232950:
    // 0x232950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x232950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232954:
    // 0x232954: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x232954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_232958:
    // 0x232958: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x232958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_23295c:
    // 0x23295c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x23295cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_232960:
    // 0x232960: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x232960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_232964:
    // 0x232964: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x232964u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_232968:
    // 0x232968: 0xc119b68  jal         func_466DA0
label_23296c:
    if (ctx->pc == 0x23296Cu) {
        ctx->pc = 0x232970u;
        goto label_232970;
    }
    ctx->pc = 0x232968u;
    SET_GPR_U32(ctx, 31, 0x232970u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x232968u, 0x232970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232970u;
label_232970:
    // 0x232970: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x232970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_232974:
    // 0x232974: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_232978:
    if (ctx->pc == 0x232978u) {
        ctx->pc = 0x23297Cu;
        goto label_23297c;
    }
    ctx->pc = 0x232974u;
    {
        const bool branch_taken_0x232974 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x232974) {
            ctx->pc = 0x232988u;
            goto label_232988;
        }
    }
    ctx->pc = 0x23297Cu;
label_23297c:
    // 0x23297c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23297cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232980:
    // 0x232980: 0x1000000e  b           . + 4 + (0xE << 2)
label_232984:
    if (ctx->pc == 0x232984u) {
        ctx->pc = 0x232988u;
        goto label_232988;
    }
    ctx->pc = 0x232980u;
    {
        const bool branch_taken_0x232980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232980) {
            ctx->pc = 0x2329BCu;
            goto label_2329bc;
        }
    }
    ctx->pc = 0x232988u;
label_232988:
    // 0x232988: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x232988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23298c:
    // 0x23298c: 0xc0ba088  jal         func_2E8220
label_232990:
    if (ctx->pc == 0x232990u) {
        ctx->pc = 0x232994u;
        goto label_232994;
    }
    ctx->pc = 0x23298Cu;
    SET_GPR_U32(ctx, 31, 0x232994u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x23298Cu, 0x232994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232994u;
label_232994:
    // 0x232994: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x232994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_232998:
    // 0x232998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23299c:
    // 0x23299c: 0xc0ba088  jal         func_2E8220
label_2329a0:
    if (ctx->pc == 0x2329A0u) {
        ctx->pc = 0x2329A4u;
        goto label_2329a4;
    }
    ctx->pc = 0x23299Cu;
    SET_GPR_U32(ctx, 31, 0x2329A4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x23299Cu, 0x2329A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2329A4u;
label_2329a4:
    // 0x2329a4: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_2329a8:
    if (ctx->pc == 0x2329A8u) {
        ctx->pc = 0x2329ACu;
        goto label_2329ac;
    }
    ctx->pc = 0x2329A4u;
    {
        const bool branch_taken_0x2329a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2329a4) {
            ctx->pc = 0x232958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232958;
        }
    }
    ctx->pc = 0x2329ACu;
label_2329ac:
    // 0x2329ac: 0x200f809  jalr        $s0
label_2329b0:
    if (ctx->pc == 0x2329B0u) {
        ctx->pc = 0x2329B4u;
        goto label_2329b4;
    }
    ctx->pc = 0x2329ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2329B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2329ACu, 0x2329B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2329B4u;
label_2329b4:
    // 0x2329b4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_2329b8:
    if (ctx->pc == 0x2329B8u) {
        ctx->pc = 0x2329BCu;
        goto label_2329bc;
    }
    ctx->pc = 0x2329B4u;
    {
        const bool branch_taken_0x2329b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2329b4) {
            ctx->pc = 0x232958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232958;
        }
    }
    ctx->pc = 0x2329BCu;
label_2329bc:
    // 0x2329bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2329bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2329c0:
    // 0x2329c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2329c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2329c4:
    // 0x2329c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2329c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2329c8:
    // 0x2329c8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2329c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2329cc:
    // 0x2329cc: 0x3e00008  jr          $ra
label_2329d0:
    if (ctx->pc == 0x2329D0u) {
        ctx->pc = 0x2329D4u;
        goto label_2329d4;
    }
    ctx->pc = 0x2329CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2329CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2329D4u;
label_2329d4:
    // 0x2329d4: 0x0  nop
    ctx->pc = 0x2329d4u;
    // NOP
label_2329d8:
    // 0x2329d8: 0x0  nop
    ctx->pc = 0x2329d8u;
    // NOP
label_2329dc:
    // 0x2329dc: 0x0  nop
    ctx->pc = 0x2329dcu;
    // NOP
    ctx->pc = 0x2329e0u;
}

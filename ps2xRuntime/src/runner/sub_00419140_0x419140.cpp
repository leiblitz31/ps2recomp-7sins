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

// Function: sub_00419140
// Address: 0x419140 - 0x4191c8
void sub_00419140_0x419140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419140_0x419140");
#endif

    switch (ctx->pc) {
        case 0x419140u: goto label_419140;
        case 0x419144u: goto label_419144;
        case 0x419148u: goto label_419148;
        case 0x41914cu: goto label_41914c;
        case 0x419150u: goto label_419150;
        case 0x419154u: goto label_419154;
        case 0x419158u: goto label_419158;
        case 0x41915cu: goto label_41915c;
        case 0x419160u: goto label_419160;
        case 0x419164u: goto label_419164;
        case 0x419168u: goto label_419168;
        case 0x41916cu: goto label_41916c;
        case 0x419170u: goto label_419170;
        case 0x419174u: goto label_419174;
        case 0x419178u: goto label_419178;
        case 0x41917cu: goto label_41917c;
        case 0x419180u: goto label_419180;
        case 0x419184u: goto label_419184;
        case 0x419188u: goto label_419188;
        case 0x41918cu: goto label_41918c;
        case 0x419190u: goto label_419190;
        case 0x419194u: goto label_419194;
        case 0x419198u: goto label_419198;
        case 0x41919cu: goto label_41919c;
        case 0x4191a0u: goto label_4191a0;
        case 0x4191a4u: goto label_4191a4;
        case 0x4191a8u: goto label_4191a8;
        case 0x4191acu: goto label_4191ac;
        case 0x4191b0u: goto label_4191b0;
        case 0x4191b4u: goto label_4191b4;
        case 0x4191b8u: goto label_4191b8;
        case 0x4191bcu: goto label_4191bc;
        case 0x4191c0u: goto label_4191c0;
        case 0x4191c4u: goto label_4191c4;
        default: break;
    }

    ctx->pc = 0x419140u;

label_419140:
    // 0x419140: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x419140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_419144:
    // 0x419144: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x419144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_419148:
    // 0x419148: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x419148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_41914c:
    // 0x41914c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41914cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_419150:
    // 0x419150: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x419150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_419154:
    // 0x419154: 0x8c62e894  lw          $v0, -0x176C($v1)
    ctx->pc = 0x419154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961300)));
label_419158:
    // 0x419158: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x419158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_41915c:
    // 0x41915c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x41915cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_419160:
    // 0x419160: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x419160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_419164:
    // 0x419164: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x419164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_419168:
    // 0x419168: 0x40f809  jalr        $v0
label_41916c:
    if (ctx->pc == 0x41916Cu) {
        ctx->pc = 0x41916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419168u;
        // 0x41916c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x419170u;
        goto label_419170;
    }
    ctx->pc = 0x419168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x419170u);
        ctx->pc = 0x41916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419168u;
        // 0x41916c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419168u, 0x419170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x419170u;
label_419170:
    // 0x419170: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x419170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_419174:
    // 0x419174: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
label_419178:
    if (ctx->pc == 0x419178u) {
        ctx->pc = 0x419178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419174u;
        // 0x419178: 0x10102b  sltu        $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41917Cu;
        goto label_41917c;
    }
    ctx->pc = 0x419174u;
    {
        const bool branch_taken_0x419174 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x419178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419174u;
        // 0x419178: 0x10102b  sltu        $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x419174) {
            ctx->pc = 0x4191B0u;
            goto label_4191b0;
        }
    }
    ctx->pc = 0x41917Cu;
label_41917c:
    // 0x41917c: 0x2e300001  sltiu       $s0, $s1, 0x1
    ctx->pc = 0x41917cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_419180:
    // 0x419180: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_419184:
    if (ctx->pc == 0x419184u) {
        ctx->pc = 0x419184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419180u;
        // 0x419184: 0x10102b  sltu        $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x419188u;
        goto label_419188;
    }
    ctx->pc = 0x419180u;
    {
        const bool branch_taken_0x419180 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x419184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419180u;
        // 0x419184: 0x10102b  sltu        $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x419180) {
            ctx->pc = 0x4191B0u;
            goto label_4191b0;
        }
    }
    ctx->pc = 0x419188u;
label_419188:
    // 0x419188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x419188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41918c:
    // 0x41918c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x41918cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_419190:
    // 0x419190: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x419190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_419194:
    // 0x419194: 0xc1035f6  jal         func_40D7D8
label_419198:
    if (ctx->pc == 0x419198u) {
        ctx->pc = 0x419198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419194u;
        // 0x419198: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41919Cu;
        goto label_41919c;
    }
    ctx->pc = 0x419194u;
    SET_GPR_U32(ctx, 31, 0x41919Cu);
    ctx->pc = 0x419198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419194u;
    // 0x419198: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x419194u, 0x41919Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41919Cu;
label_41919c:
    // 0x41919c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x41919cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4191a0:
    // 0x4191a0: 0xc103628  jal         func_40D8A0
label_4191a4:
    if (ctx->pc == 0x4191A4u) {
        ctx->pc = 0x4191A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4191A0u;
        // 0x4191a4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4191A8u;
        goto label_4191a8;
    }
    ctx->pc = 0x4191A0u;
    SET_GPR_U32(ctx, 31, 0x4191A8u);
    ctx->pc = 0x4191A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4191A0u;
    // 0x4191a4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x4191A0u, 0x4191A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4191A8u;
label_4191a8:
    // 0x4191a8: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x4191a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4191ac:
    // 0x4191ac: 0x0  nop
    ctx->pc = 0x4191acu;
    // NOP
label_4191b0:
    // 0x4191b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4191b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4191b4:
    // 0x4191b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4191b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4191b8:
    // 0x4191b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4191b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4191bc:
    // 0x4191bc: 0x3e00008  jr          $ra
label_4191c0:
    if (ctx->pc == 0x4191C0u) {
        ctx->pc = 0x4191C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4191BCu;
        // 0x4191c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4191C4u;
        goto label_4191c4;
    }
    ctx->pc = 0x4191BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4191C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4191BCu;
        // 0x4191c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4191BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4191C4u;
label_4191c4:
    // 0x4191c4: 0x0  nop
    ctx->pc = 0x4191c4u;
    // NOP
    ctx->pc = 0x4191c8u;
}

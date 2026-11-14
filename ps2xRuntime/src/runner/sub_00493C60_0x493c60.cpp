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

// Function: sub_00493C60
// Address: 0x493c60 - 0x493dc0
void sub_00493C60_0x493c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00493C60_0x493c60");
#endif

    switch (ctx->pc) {
        case 0x493cc0u: goto label_493cc0;
        case 0x493cd0u: goto label_493cd0;
        case 0x493ce0u: goto label_493ce0;
        case 0x493d04u: goto label_493d04;
        case 0x493d10u: goto label_493d10;
        case 0x493d20u: goto label_493d20;
        case 0x493d38u: goto label_493d38;
        case 0x493d8cu: goto label_493d8c;
        default: break;
    }

    ctx->pc = 0x493c60u;

    // 0x493c60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x493c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x493c64: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x493c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x493c68: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x493c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x493c6c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x493c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x493c70: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x493c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x493c74: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x493c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x493c78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x493c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x493c7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x493c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x493c80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x493c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x493c84: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x493c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x493c88: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x493c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x493c8c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x493c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x493c90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x493C90u;
    {
        const bool branch_taken_0x493c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x493c90) {
            ctx->pc = 0x493CA4u;
            goto label_493ca4;
        }
    }
    ctx->pc = 0x493C98u;
    // 0x493c98: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x493c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x493c9c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x493C9Cu;
    {
        const bool branch_taken_0x493c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493c9c) {
            ctx->pc = 0x493CB0u;
            goto label_493cb0;
        }
    }
    ctx->pc = 0x493CA4u;
label_493ca4:
    // 0x493ca4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x493ca4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493ca8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x493CA8u;
    {
        const bool branch_taken_0x493ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493ca8) {
            ctx->pc = 0x493D8Cu;
            goto label_493d8c;
        }
    }
    ctx->pc = 0x493CB0u;
label_493cb0:
    // 0x493cb0: 0x8fb30090  lw          $s3, 0x90($sp)
    ctx->pc = 0x493cb0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x493cb4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x493cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x493cb8: 0xc0e0c3a  jal         func_3830E8
    ctx->pc = 0x493CB8u;
    SET_GPR_U32(ctx, 31, 0x493CC0u);
    ctx->pc = 0x3830E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3830E8u, 0x493CB8u, 0x493CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493CC0u;
label_493cc0:
    // 0x493cc0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x493cc0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493cc4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x493cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493cc8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x493CC8u;
    {
        const bool branch_taken_0x493cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493cc8) {
            ctx->pc = 0x493D68u;
            goto label_493d68;
        }
    }
    ctx->pc = 0x493CD0u;
label_493cd0:
    // 0x493cd0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x493cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x493cd4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x493cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493cd8: 0xc0e0c2e  jal         func_3830B8
    ctx->pc = 0x493CD8u;
    SET_GPR_U32(ctx, 31, 0x493CE0u);
    ctx->pc = 0x3830B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3830B8u, 0x493CD8u, 0x493CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493CE0u;
label_493ce0:
    // 0x493ce0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x493ce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493ce4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x493ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x493ce8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x493ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x493cec: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x493CECu;
    {
        const bool branch_taken_0x493cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x493cec) {
            ctx->pc = 0x493D64u;
            goto label_493d64;
        }
    }
    ctx->pc = 0x493CF4u;
    // 0x493cf4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x493cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493cf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x493cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493cfc: 0xc0e0db8  jal         func_3836E0
    ctx->pc = 0x493CFCu;
    SET_GPR_U32(ctx, 31, 0x493D04u);
    ctx->pc = 0x3836E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3836E0u, 0x493CFCu, 0x493D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493D04u;
label_493d04:
    // 0x493d04: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x493d04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493d08: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x493D08u;
    {
        const bool branch_taken_0x493d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493d08) {
            ctx->pc = 0x493D58u;
            goto label_493d58;
        }
    }
    ctx->pc = 0x493D10u;
label_493d10:
    // 0x493d10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x493d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493d14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x493d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493d18: 0xc0e0dc6  jal         func_383718
    ctx->pc = 0x493D18u;
    SET_GPR_U32(ctx, 31, 0x493D20u);
    ctx->pc = 0x383718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383718u, 0x493D18u, 0x493D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493D20u;
label_493d20:
    // 0x493d20: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x493d20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493d24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x493d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493d28: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x493d28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x493d2c: 0x24a57d70  addiu       $a1, $a1, 0x7D70
    ctx->pc = 0x493d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32112));
    // 0x493d30: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x493D30u;
    SET_GPR_U32(ctx, 31, 0x493D38u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x493D30u, 0x493D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493D38u;
label_493d38:
    // 0x493d38: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x493D38u;
    {
        const bool branch_taken_0x493d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493d38) {
            ctx->pc = 0x493D54u;
            goto label_493d54;
        }
    }
    ctx->pc = 0x493D40u;
    // 0x493d40: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x493d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x493d44: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x493d44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x493d48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x493d48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x493d4c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x493D4Cu;
    {
        const bool branch_taken_0x493d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493d4c) {
            ctx->pc = 0x493D8Cu;
            goto label_493d8c;
        }
    }
    ctx->pc = 0x493D54u;
label_493d54:
    // 0x493d54: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x493d54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_493d58:
    // 0x493d58: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x493d58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x493d5c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x493D5Cu;
    {
        const bool branch_taken_0x493d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493d5c) {
            ctx->pc = 0x493D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493d10;
        }
    }
    ctx->pc = 0x493D64u;
label_493d64:
    // 0x493d64: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x493d64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_493d68:
    // 0x493d68: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x493d68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x493d6c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x493D6Cu;
    {
        const bool branch_taken_0x493d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493d6c) {
            ctx->pc = 0x493CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493cd0;
        }
    }
    ctx->pc = 0x493D74u;
    // 0x493d74: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x493d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x493d78: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x493d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x493d7c: 0x24a53c60  addiu       $a1, $a1, 0x3C60
    ctx->pc = 0x493d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15456));
    // 0x493d80: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x493d80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x493d84: 0xc1066c2  jal         func_419B08
    ctx->pc = 0x493D84u;
    SET_GPR_U32(ctx, 31, 0x493D8Cu);
    ctx->pc = 0x419B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B08u, 0x493D84u, 0x493D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493D8Cu;
label_493d8c:
    // 0x493d8c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x493d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x493d90: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x493d90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x493d94: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x493d94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x493d98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x493d98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x493d9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x493d9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x493da0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x493da0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x493da4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x493da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493da8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x493da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x493dac: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x493dacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x493db0: 0x3e00008  jr          $ra
    ctx->pc = 0x493DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x493DB8u;
    // 0x493db8: 0x0  nop
    ctx->pc = 0x493db8u;
    // NOP
    // 0x493dbc: 0x0  nop
    ctx->pc = 0x493dbcu;
    // NOP
    ctx->pc = 0x493dc0u;
}

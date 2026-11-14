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

// Function: sub_003BBA30
// Address: 0x3bba30 - 0x3bbc00
void sub_003BBA30_0x3bba30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BBA30_0x3bba30");
#endif

    switch (ctx->pc) {
        case 0x3bba30u: goto label_3bba30;
        case 0x3bba34u: goto label_3bba34;
        case 0x3bba38u: goto label_3bba38;
        case 0x3bba3cu: goto label_3bba3c;
        case 0x3bba40u: goto label_3bba40;
        case 0x3bba44u: goto label_3bba44;
        case 0x3bba48u: goto label_3bba48;
        case 0x3bba4cu: goto label_3bba4c;
        case 0x3bba50u: goto label_3bba50;
        case 0x3bba54u: goto label_3bba54;
        case 0x3bba58u: goto label_3bba58;
        case 0x3bba5cu: goto label_3bba5c;
        case 0x3bba60u: goto label_3bba60;
        case 0x3bba64u: goto label_3bba64;
        case 0x3bba68u: goto label_3bba68;
        case 0x3bba6cu: goto label_3bba6c;
        case 0x3bba70u: goto label_3bba70;
        case 0x3bba74u: goto label_3bba74;
        case 0x3bba78u: goto label_3bba78;
        case 0x3bba7cu: goto label_3bba7c;
        case 0x3bba80u: goto label_3bba80;
        case 0x3bba84u: goto label_3bba84;
        case 0x3bba88u: goto label_3bba88;
        case 0x3bba8cu: goto label_3bba8c;
        case 0x3bba90u: goto label_3bba90;
        case 0x3bba94u: goto label_3bba94;
        case 0x3bba98u: goto label_3bba98;
        case 0x3bba9cu: goto label_3bba9c;
        case 0x3bbaa0u: goto label_3bbaa0;
        case 0x3bbaa4u: goto label_3bbaa4;
        case 0x3bbaa8u: goto label_3bbaa8;
        case 0x3bbaacu: goto label_3bbaac;
        case 0x3bbab0u: goto label_3bbab0;
        case 0x3bbab4u: goto label_3bbab4;
        case 0x3bbab8u: goto label_3bbab8;
        case 0x3bbabcu: goto label_3bbabc;
        case 0x3bbac0u: goto label_3bbac0;
        case 0x3bbac4u: goto label_3bbac4;
        case 0x3bbac8u: goto label_3bbac8;
        case 0x3bbaccu: goto label_3bbacc;
        case 0x3bbad0u: goto label_3bbad0;
        case 0x3bbad4u: goto label_3bbad4;
        case 0x3bbad8u: goto label_3bbad8;
        case 0x3bbadcu: goto label_3bbadc;
        case 0x3bbae0u: goto label_3bbae0;
        case 0x3bbae4u: goto label_3bbae4;
        case 0x3bbae8u: goto label_3bbae8;
        case 0x3bbaecu: goto label_3bbaec;
        case 0x3bbaf0u: goto label_3bbaf0;
        case 0x3bbaf4u: goto label_3bbaf4;
        case 0x3bbaf8u: goto label_3bbaf8;
        case 0x3bbafcu: goto label_3bbafc;
        case 0x3bbb00u: goto label_3bbb00;
        case 0x3bbb04u: goto label_3bbb04;
        case 0x3bbb08u: goto label_3bbb08;
        case 0x3bbb0cu: goto label_3bbb0c;
        case 0x3bbb10u: goto label_3bbb10;
        case 0x3bbb14u: goto label_3bbb14;
        case 0x3bbb18u: goto label_3bbb18;
        case 0x3bbb1cu: goto label_3bbb1c;
        case 0x3bbb20u: goto label_3bbb20;
        case 0x3bbb24u: goto label_3bbb24;
        case 0x3bbb28u: goto label_3bbb28;
        case 0x3bbb2cu: goto label_3bbb2c;
        case 0x3bbb30u: goto label_3bbb30;
        case 0x3bbb34u: goto label_3bbb34;
        case 0x3bbb38u: goto label_3bbb38;
        case 0x3bbb3cu: goto label_3bbb3c;
        case 0x3bbb40u: goto label_3bbb40;
        case 0x3bbb44u: goto label_3bbb44;
        case 0x3bbb48u: goto label_3bbb48;
        case 0x3bbb4cu: goto label_3bbb4c;
        case 0x3bbb50u: goto label_3bbb50;
        case 0x3bbb54u: goto label_3bbb54;
        case 0x3bbb58u: goto label_3bbb58;
        case 0x3bbb5cu: goto label_3bbb5c;
        case 0x3bbb60u: goto label_3bbb60;
        case 0x3bbb64u: goto label_3bbb64;
        case 0x3bbb68u: goto label_3bbb68;
        case 0x3bbb6cu: goto label_3bbb6c;
        case 0x3bbb70u: goto label_3bbb70;
        case 0x3bbb74u: goto label_3bbb74;
        case 0x3bbb78u: goto label_3bbb78;
        case 0x3bbb7cu: goto label_3bbb7c;
        case 0x3bbb80u: goto label_3bbb80;
        case 0x3bbb84u: goto label_3bbb84;
        case 0x3bbb88u: goto label_3bbb88;
        case 0x3bbb8cu: goto label_3bbb8c;
        case 0x3bbb90u: goto label_3bbb90;
        case 0x3bbb94u: goto label_3bbb94;
        case 0x3bbb98u: goto label_3bbb98;
        case 0x3bbb9cu: goto label_3bbb9c;
        case 0x3bbba0u: goto label_3bbba0;
        case 0x3bbba4u: goto label_3bbba4;
        case 0x3bbba8u: goto label_3bbba8;
        case 0x3bbbacu: goto label_3bbbac;
        case 0x3bbbb0u: goto label_3bbbb0;
        case 0x3bbbb4u: goto label_3bbbb4;
        case 0x3bbbb8u: goto label_3bbbb8;
        case 0x3bbbbcu: goto label_3bbbbc;
        case 0x3bbbc0u: goto label_3bbbc0;
        case 0x3bbbc4u: goto label_3bbbc4;
        case 0x3bbbc8u: goto label_3bbbc8;
        case 0x3bbbccu: goto label_3bbbcc;
        case 0x3bbbd0u: goto label_3bbbd0;
        case 0x3bbbd4u: goto label_3bbbd4;
        case 0x3bbbd8u: goto label_3bbbd8;
        case 0x3bbbdcu: goto label_3bbbdc;
        case 0x3bbbe0u: goto label_3bbbe0;
        case 0x3bbbe4u: goto label_3bbbe4;
        case 0x3bbbe8u: goto label_3bbbe8;
        case 0x3bbbecu: goto label_3bbbec;
        case 0x3bbbf0u: goto label_3bbbf0;
        case 0x3bbbf4u: goto label_3bbbf4;
        case 0x3bbbf8u: goto label_3bbbf8;
        case 0x3bbbfcu: goto label_3bbbfc;
        default: break;
    }

    ctx->pc = 0x3bba30u;

label_3bba30:
    // 0x3bba30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3bba30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3bba34:
    // 0x3bba34: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3bba34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3bba38:
    // 0x3bba38: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3bba38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3bba3c:
    // 0x3bba3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3bba3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bba40:
    // 0x3bba40: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3bba40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3bba44:
    // 0x3bba44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bba44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bba48:
    // 0x3bba48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bba48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3bba4c:
    // 0x3bba4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3bba4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bba50:
    // 0x3bba50: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x3bba50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_3bba54:
    // 0x3bba54: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3bba54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3bba58:
    // 0x3bba58: 0x8e28002c  lw          $t0, 0x2C($s1)
    ctx->pc = 0x3bba58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3bba5c:
    // 0x3bba5c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3bba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3bba60:
    // 0x3bba60: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x3bba60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3bba64:
    // 0x3bba64: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x3bba64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
label_3bba68:
    // 0x3bba68: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x3bba68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3bba6c:
    // 0x3bba6c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3bba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3bba70:
    // 0x3bba70: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x3bba70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3bba74:
    // 0x3bba74: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x3bba74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3bba78:
    // 0x3bba78: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x3bba78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
label_3bba7c:
    // 0x3bba7c: 0xae26003c  sw          $a2, 0x3C($s1)
    ctx->pc = 0x3bba7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 6));
label_3bba80:
    // 0x3bba80: 0xae240040  sw          $a0, 0x40($s1)
    ctx->pc = 0x3bba80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 4));
label_3bba84:
    // 0x3bba84: 0xae250044  sw          $a1, 0x44($s1)
    ctx->pc = 0x3bba84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 5));
label_3bba88:
    // 0x3bba88: 0xae270048  sw          $a3, 0x48($s1)
    ctx->pc = 0x3bba88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 7));
label_3bba8c:
    // 0x3bba8c: 0x19000015  blez        $t0, . + 4 + (0x15 << 2)
label_3bba90:
    if (ctx->pc == 0x3BBA90u) {
        ctx->pc = 0x3BBA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBA8Cu;
        // 0x3bba90: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBA94u;
        goto label_3bba94;
    }
    ctx->pc = 0x3BBA8Cu;
    {
        const bool branch_taken_0x3bba8c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x3BBA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBA8Cu;
        // 0x3bba90: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bba8c) {
            ctx->pc = 0x3BBAE4u;
            goto label_3bbae4;
        }
    }
    ctx->pc = 0x3BBA94u;
label_3bba94:
    // 0x3bba94: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x3bba94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3bba98:
    // 0x3bba98: 0x2083021  addu        $a2, $s0, $t0
    ctx->pc = 0x3bba98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_3bba9c:
    // 0x3bba9c: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x3bba9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3bbaa0:
    // 0x3bbaa0: 0xc51818  mult        $v1, $a2, $a1
    ctx->pc = 0x3bbaa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3bbaa4:
    // 0x3bbaa4: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x3bbaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3bbaa8:
    // 0x3bbaa8: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x3bbaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_3bbaac:
    // 0x3bbaac: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x3bbaacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3bbab0:
    // 0x3bbab0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3bbab0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3bbab4:
    // 0x3bbab4: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x3bbab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_3bbab8:
    // 0x3bbab8: 0x2051818  mult        $v1, $s0, $a1
    ctx->pc = 0x3bbab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3bbabc:
    // 0x3bbabc: 0x2484004c  addiu       $a0, $a0, 0x4C
    ctx->pc = 0x3bbabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
label_3bbac0:
    // 0x3bbac0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3bbac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3bbac4:
    // 0x3bbac4: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x3bbac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_3bbac8:
    // 0x3bbac8: 0x672821  addu        $a1, $v1, $a3
    ctx->pc = 0x3bbac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_3bbacc:
    // 0x3bbacc: 0x40f809  jalr        $v0
label_3bbad0:
    if (ctx->pc == 0x3BBAD0u) {
        ctx->pc = 0x3BBAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBACCu;
        // 0x3bbad0: 0x8e470014  lw          $a3, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBAD4u;
        goto label_3bbad4;
    }
    ctx->pc = 0x3BBACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BBAD4u);
        ctx->pc = 0x3BBAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBACCu;
        // 0x3bbad0: 0x8e470014  lw          $a3, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BBACCu, 0x3BBAD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BBAD4u;
label_3bbad4:
    // 0x3bbad4: 0x8e28002c  lw          $t0, 0x2C($s1)
    ctx->pc = 0x3bbad4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3bbad8:
    // 0x3bbad8: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x3bbad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_3bbadc:
    // 0x3bbadc: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
label_3bbae0:
    if (ctx->pc == 0x3BBAE0u) {
        ctx->pc = 0x3BBAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBADCu;
        // 0x3bbae0: 0x8e250028  lw          $a1, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBAE4u;
        goto label_3bbae4;
    }
    ctx->pc = 0x3BBADCu;
    {
        const bool branch_taken_0x3bbadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bbadc) {
            ctx->pc = 0x3BBAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BBADCu;
            // 0x3bbae0: 0x8e250028  lw          $a1, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BBA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bba98;
        }
    }
    ctx->pc = 0x3BBAE4u;
label_3bbae4:
    // 0x3bbae4: 0x8e29002c  lw          $t1, 0x2C($s1)
    ctx->pc = 0x3bbae4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3bbae8:
    // 0x3bbae8: 0x262a004c  addiu       $t2, $s1, 0x4C
    ctx->pc = 0x3bbae8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_3bbaec:
    // 0x3bbaec: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x3bbaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3bbaf0:
    // 0x3bbaf0: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x3bbaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3bbaf4:
    // 0x3bbaf4: 0x1231018  mult        $v0, $t1, $v1
    ctx->pc = 0x3bbaf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3bbaf8:
    // 0x3bbaf8: 0x19200033  blez        $t1, . + 4 + (0x33 << 2)
label_3bbafc:
    if (ctx->pc == 0x3BBAFCu) {
        ctx->pc = 0x3BBAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBAF8u;
        // 0x3bbafc: 0xa22021  addu        $a0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBB00u;
        goto label_3bbb00;
    }
    ctx->pc = 0x3BBAF8u;
    {
        const bool branch_taken_0x3bbaf8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3BBAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBAF8u;
        // 0x3bbafc: 0xa22021  addu        $a0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbaf8) {
            ctx->pc = 0x3BBBC8u;
            goto label_3bbbc8;
        }
    }
    ctx->pc = 0x3BBB00u;
label_3bbb00:
    // 0x3bbb00: 0x91023  negu        $v0, $t1
    ctx->pc = 0x3bbb00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
label_3bbb04:
    // 0x3bbb04: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3bbb04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3bbb08:
    // 0x3bbb08: 0x30470003  andi        $a3, $v0, 0x3
    ctx->pc = 0x3bbb08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3bbb0c:
    // 0x3bbb0c: 0x8e280024  lw          $t0, 0x24($s1)
    ctx->pc = 0x3bbb0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3bbb10:
    // 0x3bbb10: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x3bbb10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3bbb14:
    // 0x3bbb14: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
label_3bbb18:
    if (ctx->pc == 0x3BBB18u) {
        ctx->pc = 0x3BBB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBB14u;
        // 0x3bbb18: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBB1Cu;
        goto label_3bbb1c;
    }
    ctx->pc = 0x3BBB14u;
    {
        const bool branch_taken_0x3bbb14 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBB14u;
        // 0x3bbb18: 0x140182d  daddu       $v1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbb14) {
            ctx->pc = 0x3BBB70u;
            goto label_3bbb70;
        }
    }
    ctx->pc = 0x3BBB1Cu;
label_3bbb1c:
    // 0x3bbb1c: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x3bbb1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
label_3bbb20:
    // 0x3bbb20: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3bbb24:
    if (ctx->pc == 0x3BBB24u) {
        ctx->pc = 0x3BBB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBB20u;
        // 0x3bbb24: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBB28u;
        goto label_3bbb28;
    }
    ctx->pc = 0x3BBB20u;
    {
        const bool branch_taken_0x3bbb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBB20u;
        // 0x3bbb24: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbb20) {
            ctx->pc = 0x3BBB60u;
            goto label_3bbb60;
        }
    }
    ctx->pc = 0x3BBB28u;
label_3bbb28:
    // 0x3bbb28: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3bbb2c:
    if (ctx->pc == 0x3BBB2Cu) {
        ctx->pc = 0x3BBB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBB28u;
        // 0x3bbb2c: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBB30u;
        goto label_3bbb30;
    }
    ctx->pc = 0x3BBB28u;
    {
        const bool branch_taken_0x3bbb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bbb28) {
            ctx->pc = 0x3BBB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BBB28u;
            // 0x3bbb2c: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BBB4Cu;
            goto label_3bbb4c;
        }
    }
    ctx->pc = 0x3BBB30u;
label_3bbb30:
    // 0x3bbb30: 0xae25004c  sw          $a1, 0x4C($s1)
    ctx->pc = 0x3bbb30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 5));
label_3bbb34:
    // 0x3bbb34: 0x1481821  addu        $v1, $t2, $t0
    ctx->pc = 0x3bbb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_3bbb38:
    // 0x3bbb38: 0xad440004  sw          $a0, 0x4($t2)
    ctx->pc = 0x3bbb38u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 4));
label_3bbb3c:
    // 0x3bbb3c: 0x2530ffff  addiu       $s0, $t1, -0x1
    ctx->pc = 0x3bbb3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_3bbb40:
    // 0x3bbb40: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3bbb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3bbb44:
    // 0x3bbb44: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3bbb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3bbb48:
    // 0x3bbb48: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x3bbb48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_3bbb4c:
    // 0x3bbb4c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3bbb4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3bbb50:
    // 0x3bbb50: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x3bbb50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_3bbb54:
    // 0x3bbb54: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3bbb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3bbb58:
    // 0x3bbb58: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3bbb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_3bbb5c:
    // 0x3bbb5c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3bbb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3bbb60:
    // 0x3bbb60: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x3bbb60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_3bbb64:
    // 0x3bbb64: 0x10000013  b           . + 4 + (0x13 << 2)
label_3bbb68:
    if (ctx->pc == 0x3BBB68u) {
        ctx->pc = 0x3BBB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBB64u;
        // 0x3bbb68: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBB6Cu;
        goto label_3bbb6c;
    }
    ctx->pc = 0x3BBB64u;
    {
        const bool branch_taken_0x3bbb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BBB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBB64u;
        // 0x3bbb68: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbb64) {
            ctx->pc = 0x3BBBB4u;
            goto label_3bbbb4;
        }
    }
    ctx->pc = 0x3BBB6Cu;
label_3bbb6c:
    // 0x3bbb6c: 0x0  nop
    ctx->pc = 0x3bbb6cu;
    // NOP
label_3bbb70:
    // 0x3bbb70: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x3bbb70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_3bbb74:
    // 0x3bbb74: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x3bbb74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_3bbb78:
    // 0x3bbb78: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x3bbb78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_3bbb7c:
    // 0x3bbb7c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3bbb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3bbb80:
    // 0x3bbb80: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3bbb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_3bbb84:
    // 0x3bbb84: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3bbb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3bbb88:
    // 0x3bbb88: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x3bbb88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_3bbb8c:
    // 0x3bbb8c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x3bbb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_3bbb90:
    // 0x3bbb90: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3bbb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3bbb94:
    // 0x3bbb94: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3bbb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_3bbb98:
    // 0x3bbb98: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3bbb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3bbb9c:
    // 0x3bbb9c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x3bbb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_3bbba0:
    // 0x3bbba0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x3bbba0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_3bbba4:
    // 0x3bbba4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3bbba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3bbba8:
    // 0x3bbba8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3bbba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_3bbbac:
    // 0x3bbbac: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3bbbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_3bbbb0:
    // 0x3bbbb0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x3bbbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_3bbbb4:
    // 0x3bbbb4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x3bbbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_3bbbb8:
    // 0x3bbbb8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3bbbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3bbbbc:
    // 0x3bbbbc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3bbbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_3bbbc0:
    // 0x3bbbc0: 0x1600ffeb  bnez        $s0, . + 4 + (-0x15 << 2)
label_3bbbc4:
    if (ctx->pc == 0x3BBBC4u) {
        ctx->pc = 0x3BBBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBBC0u;
        // 0x3bbbc4: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBBC8u;
        goto label_3bbbc8;
    }
    ctx->pc = 0x3BBBC0u;
    {
        const bool branch_taken_0x3bbbc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BBBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBBC0u;
        // 0x3bbbc4: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bbbc0) {
            ctx->pc = 0x3BBB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bbb70;
        }
    }
    ctx->pc = 0x3BBBC8u;
label_3bbbc8:
    // 0x3bbbc8: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x3bbbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3bbbcc:
    // 0x3bbbcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bbbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bbbd0:
    // 0x3bbbd0: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x3bbbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3bbbd4:
    // 0x3bbbd4: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3bbbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3bbbd8:
    // 0x3bbbd8: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x3bbbd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3bbbdc:
    // 0x3bbbdc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3bbbdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bbbe0:
    // 0x3bbbe0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3bbbe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bbbe4:
    // 0x3bbbe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bbbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bbbe8:
    // 0x3bbbe8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x3bbbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3bbbec:
    // 0x3bbbec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3bbbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3bbbf0:
    // 0x3bbbf0: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x3bbbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_3bbbf4:
    // 0x3bbbf4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3bbbf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bbbf8:
    // 0x3bbbf8: 0x3e00008  jr          $ra
label_3bbbfc:
    if (ctx->pc == 0x3BBBFCu) {
        ctx->pc = 0x3BBBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBBF8u;
        // 0x3bbbfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BBC00u;
        goto label_fallthrough_0x3bbbf8;
    }
    ctx->pc = 0x3BBBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BBBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BBBF8u;
        // 0x3bbbfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BBBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3bbbf8:
    ctx->pc = 0x3BBC00u;
}

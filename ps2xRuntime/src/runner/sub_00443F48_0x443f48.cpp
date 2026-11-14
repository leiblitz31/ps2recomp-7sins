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

// Function: sub_00443F48
// Address: 0x443f48 - 0x444108
void sub_00443F48_0x443f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443F48_0x443f48");
#endif

    switch (ctx->pc) {
        case 0x443fe8u: goto label_443fe8;
        case 0x4440e4u: goto label_4440e4;
        default: break;
    }

    ctx->pc = 0x443f48u;

    // 0x443f48: 0x3e00008  jr          $ra
    ctx->pc = 0x443F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443F50u;
    // 0x443f50: 0x64c6000f  daddiu      $a2, $a2, 0xF
    ctx->pc = 0x443f50u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)15);
    // 0x443f54: 0x24037fee  addiu       $v1, $zero, 0x7FEE
    ctx->pc = 0x443f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32750));
    // 0x443f58: 0x65f38  dsll        $t3, $a2, 28
    ctx->pc = 0x443f58u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << 28);
    // 0x443f5c: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x443f5cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x443f60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x443f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x443f64: 0x25687fed  addiu       $t0, $t3, 0x7FED
    ctx->pc = 0x443f64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 32749));
    // 0x443f68: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x443f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x443f6c: 0x103001a  div         $zero, $t0, $v1
    ctx->pc = 0x443f6cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x443f70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x443f70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443f74: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x443f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x443f78: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x443f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x443f7c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x443f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x443f80: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x443f80u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x443f84: 0x35290001  ori         $t1, $t1, 0x1
    ctx->pc = 0x443f84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x443f88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x443f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x443f8c: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x443f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x443f90: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x443f90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x443f94: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x443f94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x443f98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x443f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x443f9c: 0x2624003f  addiu       $a0, $s1, 0x3F
    ctx->pc = 0x443f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 63));
    // 0x443fa0: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x443fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x443fa4: 0x70c98389  pcpyld      $s0, $a2, $t1
    ctx->pc = 0x443fa4u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x443fa8: 0x825024  and         $t2, $a0, $v0
    ctx->pc = 0x443fa8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x443fac: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x443FACu;
    {
        const bool branch_taken_0x443fac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x443fac) {
            ctx->pc = 0x443FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x443FACu;
            // 0x443fb0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x443FB4u;
            goto label_443fb4;
        }
    }
    ctx->pc = 0x443FB4u;
label_443fb4:
    // 0x443fb4: 0x30f300ff  andi        $s3, $a3, 0xFF
    ctx->pc = 0x443fb4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x443fb8: 0x6012  mflo        $t4
    ctx->pc = 0x443fb8u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x443fbc: 0x19800030  blez        $t4, . + 4 + (0x30 << 2)
    ctx->pc = 0x443FBCu;
    {
        const bool branch_taken_0x443fbc = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x443FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443FBCu;
        // 0x443fc0: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443fbc) {
            ctx->pc = 0x444080u;
            goto label_444080;
        }
    }
    ctx->pc = 0x443FC4u;
    // 0x443fc4: 0x3c0f0007  lui         $t7, 0x7
    ctx->pc = 0x443fc4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)7 << 16));
    // 0x443fc8: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x443fc8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443fcc: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x443fccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x443fd0: 0x12933c  dsll32      $s2, $s2, 12
    ctx->pc = 0x443fd0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 12));
    // 0x443fd4: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x443fd4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443fd8: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x443fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
    // 0x443fdc: 0x35effee0  ori         $t7, $t7, 0xFEE0
    ctx->pc = 0x443fdcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65248);
    // 0x443fe0: 0x24187fee  addiu       $t8, $zero, 0x7FEE
    ctx->pc = 0x443fe0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 32750));
    // 0x443fe4: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x443fe4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_443fe8:
    // 0x443fe8: 0x7d100000  sq          $s0, 0x0($t0)
    ctx->pc = 0x443fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 16));
    // 0x443fec: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x443fecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x443ff0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x443ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x443ff4: 0x29627fef  slti        $v0, $t3, 0x7FEF
    ctx->pc = 0x443ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)32751) ? 1 : 0);
    // 0x443ff8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x443FF8u;
    {
        const bool branch_taken_0x443ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x443FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443FF8u;
        // 0x443ffc: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443ff8) {
            ctx->pc = 0x444004u;
            goto label_444004;
        }
    }
    ctx->pc = 0x444000u;
    // 0x444000: 0x24047fee  addiu       $a0, $zero, 0x7FEE
    ctx->pc = 0x444000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32750));
label_444004:
    // 0x444004: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x444004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444008: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x444008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x44400c: 0x1d8001a  div         $zero, $t6, $t8
    ctx->pc = 0x44400cu;
    { int32_t divisor = GPR_S32(ctx, 24);    int32_t dividend = GPR_S32(ctx, 14);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x444010: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x444010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x444014: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x444014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x444018: 0x31f00  sll         $v1, $v1, 28
    ctx->pc = 0x444018u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 28));
    // 0x44401c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x44401cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x444020: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x444020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x444024: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x444024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x444028: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x444028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x44402c: 0x524825  or          $t1, $v0, $s2
    ctx->pc = 0x44402cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x444030: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x444030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x444034: 0x73293389  pcpyld      $a2, $t9, $t1
    ctx->pc = 0x444034u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 25), GPR_VEC(ctx, 9)));
    // 0x444038: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x444038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x44403c: 0x7d060000  sq          $a2, 0x0($t0)
    ctx->pc = 0x44403cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 6));
    // 0x444040: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x444040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x444044: 0x624825  or          $t1, $v1, $v0
    ctx->pc = 0x444044u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x444048: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x444048u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x44404c: 0x70c91389  pcpyld      $v0, $a2, $t1
    ctx->pc = 0x44404cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x444050: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x444050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x444054: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x444054u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x444058: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x444058u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x44405c: 0x53190001  beql        $t8, $t9, . + 4 + (0x1 << 2)
    ctx->pc = 0x44405Cu;
    {
        const bool branch_taken_0x44405c = (GPR_U64(ctx, 24) == GPR_U64(ctx, 25));
        if (branch_taken_0x44405c) {
            ctx->pc = 0x444060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44405Cu;
            // 0x444060: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x444064u;
            goto label_444064;
        }
    }
    ctx->pc = 0x444064u;
label_444064:
    // 0x444064: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x444064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x444068: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x444068u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x44406c: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x44406cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x444070: 0x6012  mflo        $t4
    ctx->pc = 0x444070u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x444074: 0x1ac102a  slt         $v0, $t5, $t4
    ctx->pc = 0x444074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x444078: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x444078u;
    {
        const bool branch_taken_0x444078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444078u;
        // 0x44407c: 0x256b8012  addiu       $t3, $t3, -0x7FEE (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294934546));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444078) {
            ctx->pc = 0x443FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_443fe8;
        }
    }
    ctx->pc = 0x444080u;
label_444080:
    // 0x444080: 0x3c096000  lui         $t1, 0x6000
    ctx->pc = 0x444080u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)24576 << 16));
    // 0x444084: 0x35290002  ori         $t1, $t1, 0x2
    ctx->pc = 0x444084u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2);
    // 0x444088: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x444088u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x44408c: 0x34c60002  ori         $a2, $a2, 0x2
    ctx->pc = 0x44408cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2);
    // 0x444090: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x444090u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x444094: 0x70c91389  pcpyld      $v0, $a2, $t1
    ctx->pc = 0x444094u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x444098: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x444098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x44409c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x44409cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x4440a0: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x4440a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x4440a4: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x4440a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x4440a8: 0x35298001  ori         $t1, $t1, 0x8001
    ctx->pc = 0x4440a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32769);
    // 0x4440ac: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x4440acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4440b0: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x4440b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x4440b4: 0x70c93389  pcpyld      $a2, $a2, $t1
    ctx->pc = 0x4440b4u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 9)));
    // 0x4440b8: 0x24634040  addiu       $v1, $v1, 0x4040
    ctx->pc = 0x4440b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16448));
    // 0x4440bc: 0x7d460000  sq          $a2, 0x0($t2)
    ctx->pc = 0x4440bcu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 6));
    // 0x4440c0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4440c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4440c4: 0x2625003f  addiu       $a1, $s1, 0x3F
    ctx->pc = 0x4440c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 63));
    // 0x4440c8: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x4440c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x4440cc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x4440ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4440d0: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x4440d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x4440d4: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x4440d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4440d8: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x4440d8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x4440dc: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x4440DCu;
    SET_GPR_U32(ctx, 31, 0x4440E4u);
    ctx->pc = 0x4440E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4440DCu;
    // 0x4440e0: 0x2545008f  addiu       $a1, $t2, 0x8F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 143));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x4440DCu, 0x4440E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4440E4u;
label_4440e4:
    // 0x4440e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4440e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4440e8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4440e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4440ec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4440ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4440f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4440f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4440f4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4440f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4440f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4440f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4440fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4440FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4440FCu;
        // 0x444100: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4440FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x444104u;
    // 0x444104: 0x0  nop
    ctx->pc = 0x444104u;
    // NOP
    ctx->pc = 0x444108u;
}

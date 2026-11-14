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

// Function: sub_003800D0
// Address: 0x3800d0 - 0x3803d0
void sub_003800D0_0x3800d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003800D0_0x3800d0");
#endif

    switch (ctx->pc) {
        case 0x380128u: goto label_380128;
        case 0x3801a8u: goto label_3801a8;
        case 0x3801e8u: goto label_3801e8;
        case 0x380260u: goto label_380260;
        case 0x38029cu: goto label_38029c;
        case 0x3802a8u: goto label_3802a8;
        case 0x3802c8u: goto label_3802c8;
        case 0x380304u: goto label_380304;
        case 0x380310u: goto label_380310;
        case 0x38039cu: goto label_38039c;
        default: break;
    }

    ctx->pc = 0x3800d0u;

    // 0x3800d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3800d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3800d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3800d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3800d8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3800d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3800dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3800dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3800e0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3800e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3800e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3800e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3800e8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3800e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3800ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3800ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3800f0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3800f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3800f4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3800f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3800f8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3800f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3800fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3800fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x380100: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x380100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x380104: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x380104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x380108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x380108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38010c: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x38010cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x380110: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x380110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x380114: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x380114u;
    {
        const bool branch_taken_0x380114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380114u;
        // 0x380118: 0x2637001c  addiu       $s7, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380114) {
            ctx->pc = 0x380170u;
            goto label_380170;
        }
    }
    ctx->pc = 0x38011Cu;
    // 0x38011c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x38011cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x380120: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x380120u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380124: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x380124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_380128:
    // 0x380128: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x380128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x38012c: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x38012cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x380130: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x380130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x380134: 0x14690008  bne         $v1, $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x380134u;
    {
        const bool branch_taken_0x380134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x380138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380134u;
        // 0x380138: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380134) {
            ctx->pc = 0x380158u;
            goto label_380158;
        }
    }
    ctx->pc = 0x38013Cu;
    // 0x38013c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x38013cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x380140: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x380140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x380144: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x380144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x380148: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x380148u;
    {
        const bool branch_taken_0x380148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x380148) {
            ctx->pc = 0x380158u;
            goto label_380158;
        }
    }
    ctx->pc = 0x380150u;
    // 0x380150: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x380150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x380154: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x380154u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_380158:
    // 0x380158: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x380158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x38015c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x38015cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x380160: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x380160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x380164: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x380164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x380168: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x380168u;
    {
        const bool branch_taken_0x380168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380168u;
        // 0x38016c: 0x24c60024  addiu       $a2, $a2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380168) {
            ctx->pc = 0x380128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380128;
        }
    }
    ctx->pc = 0x380170u;
label_380170:
    // 0x380170: 0x55000003  bnel        $t0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x380170u;
    {
        const bool branch_taken_0x380170 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x380170) {
            ctx->pc = 0x380174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380170u;
            // 0x380174: 0x8e220050  lw          $v0, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380180u;
            goto label_380180;
        }
    }
    ctx->pc = 0x380178u;
    // 0x380178: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x380178u;
    {
        const bool branch_taken_0x380178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380178u;
        // 0x38017c: 0xaee00004  sw          $zero, 0x4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380178) {
            ctx->pc = 0x380388u;
            goto label_380388;
        }
    }
    ctx->pc = 0x380180u;
label_380180:
    // 0x380180: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x380180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x380184: 0x1063018  mult        $a2, $t0, $a2
    ctx->pc = 0x380184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x380188: 0x128100  sll         $s0, $s2, 4
    ctx->pc = 0x380188u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x38018c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x38018cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x380190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x380190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380194: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x380194u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380198: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x380198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x38019c: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x38019cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x3801a0: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x3801A0u;
    SET_GPR_U32(ctx, 31, 0x3801A8u);
    ctx->pc = 0x3801A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3801A0u;
    // 0x3801a4: 0x8ee40008  lw          $a0, 0x8($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3801A0u, 0x3801A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3801A8u;
label_3801a8:
    // 0x3801a8: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x3801a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3801ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3801acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3801b0: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x3801b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x3801b4: 0xaef20004  sw          $s2, 0x4($s7)
    ctx->pc = 0x3801b4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 18));
    // 0x3801b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3801b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3801bc: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x3801bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3801c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3801c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3801c4: 0x600013  mtlo        $v1
    ctx->pc = 0x3801c4u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x3801c8: 0x12400021  beqz        $s2, . + 4 + (0x21 << 2)
    ctx->pc = 0x3801C8u;
    {
        const bool branch_taken_0x3801c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3801CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3801C8u;
        // 0x3801cc: 0xaee00000  sw          $zero, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3801c8) {
            ctx->pc = 0x380250u;
            goto label_380250;
        }
    }
    ctx->pc = 0x3801D0u;
    // 0x3801d0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3801d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3801d4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3801d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3801d8: 0x24090070  addiu       $t1, $zero, 0x70
    ctx->pc = 0x3801d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x3801dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3801dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3801e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3801e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3801e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3801e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3801e8:
    // 0x3801e8: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x3801e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x3801ec: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3801ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x3801f0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x3801f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3801f4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3801f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3801f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3801f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3801fc: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x3801fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x380200: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x380200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x380204: 0x144a000c  bne         $v0, $t2, . + 4 + (0xC << 2)
    ctx->pc = 0x380204u;
    {
        const bool branch_taken_0x380204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        ctx->pc = 0x380208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380204u;
        // 0x380208: 0xacb40000  sw          $s4, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380204) {
            ctx->pc = 0x380238u;
            goto label_380238;
        }
    }
    ctx->pc = 0x38020Cu;
    // 0x38020c: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x38020Cu;
    {
        const bool branch_taken_0x38020c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38020c) {
            ctx->pc = 0x380210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38020Cu;
            // 0x380210: 0x8ee20004  lw          $v0, 0x4($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38023Cu;
            goto label_38023c;
        }
    }
    ctx->pc = 0x380214u;
    // 0x380214: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x380214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x380218: 0x5812  mflo        $t3
    ctx->pc = 0x380218u;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x38021c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x38021cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x380220: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x380220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x380224: 0xac4b000c  sw          $t3, 0xC($v0)
    ctx->pc = 0x380224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 11));
    // 0x380228: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x380228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x38022c: 0x70690000  madd        $zero, $v1, $t1
    ctx->pc = 0x38022cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x380230: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x380230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x380234: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x380234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_380238:
    // 0x380238: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x380238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_38023c:
    // 0x38023c: 0x25080024  addiu       $t0, $t0, 0x24
    ctx->pc = 0x38023cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 36));
    // 0x380240: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x380240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x380244: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x380244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x380248: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x380248u;
    {
        const bool branch_taken_0x380248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380248u;
        // 0x38024c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380248) {
            ctx->pc = 0x3801E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3801e8;
        }
    }
    ctx->pc = 0x380250u;
label_380250:
    // 0x380250: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x380250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x380254: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x380254u;
    {
        const bool branch_taken_0x380254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x380258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380254u;
        // 0x380258: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380254) {
            ctx->pc = 0x380388u;
            goto label_380388;
        }
    }
    ctx->pc = 0x38025Cu;
    // 0x38025c: 0x24020120  addiu       $v0, $zero, 0x120
    ctx->pc = 0x38025cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_380260:
    // 0x380260: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x380260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x380264: 0xa22018  mult        $a0, $a1, $v0
    ctx->pc = 0x380264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x380268: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x380268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x38026c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x38026cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x380270: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x380270u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x380274: 0xde4200f0  ld          $v0, 0xF0($s2)
    ctx->pc = 0x380274u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x380278: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x380278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38027c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x38027cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x380280: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x380280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x380284: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x380284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x380288: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x380288u;
    {
        const bool branch_taken_0x380288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x380288) {
            ctx->pc = 0x38028Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380288u;
            // 0x38028c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380378u;
            goto label_380378;
        }
    }
    ctx->pc = 0x380290u;
    // 0x380290: 0x8e440108  lw          $a0, 0x108($s2)
    ctx->pc = 0x380290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x380294: 0xc0c855a  jal         func_321568
    ctx->pc = 0x380294u;
    SET_GPR_U32(ctx, 31, 0x38029Cu);
    ctx->pc = 0x380298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380294u;
    // 0x380298: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321568u, 0x380294u, 0x38029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38029Cu;
label_38029c:
    // 0x38029c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x38029cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3802a0: 0xc0c855e  jal         func_321578
    ctx->pc = 0x3802A0u;
    SET_GPR_U32(ctx, 31, 0x3802A8u);
    ctx->pc = 0x3802A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3802A0u;
    // 0x3802a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321578u, 0x3802A0u, 0x3802A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3802A8u;
label_3802a8:
    // 0x3802a8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3802a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3802ac: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3802acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3802b0: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x3802B0u;
    {
        const bool branch_taken_0x3802b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3802b0) {
            ctx->pc = 0x3802B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3802B0u;
            // 0x3802b4: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380378u;
            goto label_380378;
        }
    }
    ctx->pc = 0x3802B8u;
    // 0x3802b8: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x3802b8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x3802bc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3802bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3802c0: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x3802c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x3802c4: 0x0  nop
    ctx->pc = 0x3802c4u;
    // NOP
label_3802c8:
    // 0x3802c8: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x3802c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x3802cc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x3802ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x3802d0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3802d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3802d4: 0x12130022  beq         $s0, $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x3802D4u;
    {
        const bool branch_taken_0x3802d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x3802D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3802D4u;
        // 0x3802d8: 0x24070024  addiu       $a3, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3802d4) {
            ctx->pc = 0x380360u;
            goto label_380360;
        }
    }
    ctx->pc = 0x3802DCu;
    // 0x3802dc: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x3802dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x3802e0: 0x2072018  mult        $a0, $s0, $a3
    ctx->pc = 0x3802e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3802e4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3802e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3802e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3802e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3802ec: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x3802ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3802f0: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x3802f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x3802f4: 0x144b001a  bne         $v0, $t3, . + 4 + (0x1A << 2)
    ctx->pc = 0x3802F4u;
    {
        const bool branch_taken_0x3802f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        ctx->pc = 0x3802F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3802F4u;
        // 0x3802f8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3802f4) {
            ctx->pc = 0x380360u;
            goto label_380360;
        }
    }
    ctx->pc = 0x3802FCu;
    // 0x3802fc: 0xc0c85a4  jal         func_321690
    ctx->pc = 0x3802FCu;
    SET_GPR_U32(ctx, 31, 0x380304u);
    ctx->pc = 0x380300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3802FCu;
    // 0x380300: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321690u, 0x3802FCu, 0x380304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380304u;
label_380304:
    // 0x380304: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x380304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380308: 0xc0c8560  jal         func_321580
    ctx->pc = 0x380308u;
    SET_GPR_U32(ctx, 31, 0x380310u);
    ctx->pc = 0x38030Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380308u;
    // 0x38030c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321580u, 0x380308u, 0x380310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380310u;
label_380310:
    // 0x380310: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x380310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380314: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x380314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x380318: 0x8ee50008  lw          $a1, 0x8($s7)
    ctx->pc = 0x380318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x38031c: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x38031cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x380320: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x380320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x380324: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x380324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x380328: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x380328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38032c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x38032cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x380330: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x380330u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x380334: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x380334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x380338: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x380338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38033c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x38033cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x380340: 0x673018  mult        $a2, $v1, $a3
    ctx->pc = 0x380340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x380344: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x380344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x380348: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x380348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x38034c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x38034cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x380350: 0xaca20068  sw          $v0, 0x68($a1)
    ctx->pc = 0x380350u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 2));
    // 0x380354: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x380354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x380358: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x380358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x38035c: 0xacd2006c  sw          $s2, 0x6C($a2)
    ctx->pc = 0x38035cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 108), GPR_U32(ctx, 18));
label_380360:
    // 0x380360: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x380360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x380364: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x380364u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x380368: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x380368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x38036c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x38036Cu;
    {
        const bool branch_taken_0x38036c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38036Cu;
        // 0x380370: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38036c) {
            ctx->pc = 0x3802C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3802c8;
        }
    }
    ctx->pc = 0x380374u;
    // 0x380374: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x380374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_380378:
    // 0x380378: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x380378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x38037c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x38037cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x380380: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x380380u;
    {
        const bool branch_taken_0x380380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380380u;
        // 0x380384: 0x24020120  addiu       $v0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380380) {
            ctx->pc = 0x380260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380260;
        }
    }
    ctx->pc = 0x380388u;
label_380388:
    // 0x380388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x380388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38038c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38038cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x380390: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x380390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380394: 0xc0e01f4  jal         func_3807D0
    ctx->pc = 0x380394u;
    SET_GPR_U32(ctx, 31, 0x38039Cu);
    ctx->pc = 0x380398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380394u;
    // 0x380398: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3807D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3807D0u, 0x380394u, 0x38039Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38039Cu;
label_38039c:
    // 0x38039c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38039cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3803a0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3803a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3803a4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3803a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3803a8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3803a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3803ac: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3803acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3803b0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3803b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3803b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3803b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3803b8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3803b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3803bc: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3803bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3803c0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3803c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3803c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3803c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3803c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3803C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3803CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3803C8u;
        // 0x3803cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3803C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3803D0u;
}

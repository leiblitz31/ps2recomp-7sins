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

// Function: sub_00379050
// Address: 0x379050 - 0x379180
void sub_00379050_0x379050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379050_0x379050");
#endif

    switch (ctx->pc) {
        case 0x3790d0u: goto label_3790d0;
        case 0x3790e8u: goto label_3790e8;
        case 0x379100u: goto label_379100;
        case 0x379114u: goto label_379114;
        case 0x379130u: goto label_379130;
        case 0x379140u: goto label_379140;
        case 0x379158u: goto label_379158;
        default: break;
    }

    ctx->pc = 0x379050u;

    // 0x379050: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x379050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x379054: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x379054u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x379058: 0x8c62ac50  lw          $v0, -0x53B0($v1)
    ctx->pc = 0x379058u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5DAC50u));
    // 0x37905c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x37905cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379060: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x379060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x379064: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x379064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x379068: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x379068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x37906c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37906cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x379070: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x379070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x379074: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x379074u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x379078: 0x1200003a  beqz        $s0, . + 4 + (0x3A << 2)
    ctx->pc = 0x379078u;
    {
        const bool branch_taken_0x379078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379078u;
        // 0x37907c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379078) {
            ctx->pc = 0x379164u;
            goto label_379164;
        }
    }
    ctx->pc = 0x379080u;
    // 0x379080: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x379080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x379084: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x379084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x379088: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x379088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x37908c: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x37908Cu;
    {
        const bool branch_taken_0x37908c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x379090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37908Cu;
        // 0x379090: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37908c) {
            ctx->pc = 0x379150u;
            goto label_379150;
        }
    }
    ctx->pc = 0x379094u;
    // 0x379094: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x379094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x379098: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x379098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
    // 0x37909c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x37909cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3790a0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3790a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3790a4: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x3790a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3790a8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3790a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3790ac: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x3790acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x3790b0: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x3790b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x3790b4: 0x8cf20014  lw          $s2, 0x14($a3)
    ctx->pc = 0x3790b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x3790b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3790b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3790bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3790bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3790c0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3790c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3790c4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3790c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3790c8: 0xc103440  jal         func_40D100
    ctx->pc = 0x3790C8u;
    SET_GPR_U32(ctx, 31, 0x3790D0u);
    ctx->pc = 0x3790CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3790C8u;
    // 0x3790cc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3790C8u, 0x3790D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3790D0u;
label_3790d0:
    // 0x3790d0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3790D0u;
    {
        const bool branch_taken_0x3790d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3790D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3790D0u;
        // 0x3790d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3790d0) {
            ctx->pc = 0x379168u;
            goto label_379168;
        }
    }
    ctx->pc = 0x3790D8u;
    // 0x3790d8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3790d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3790dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3790dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3790e0: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x3790E0u;
    SET_GPR_U32(ctx, 31, 0x3790E8u);
    ctx->pc = 0x3790E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3790E0u;
    // 0x3790e4: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x3790E0u, 0x3790E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3790E8u;
label_3790e8:
    // 0x3790e8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3790E8u;
    {
        const bool branch_taken_0x3790e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3790ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3790E8u;
        // 0x3790ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3790e8) {
            ctx->pc = 0x379168u;
            goto label_379168;
        }
    }
    ctx->pc = 0x3790F0u;
    // 0x3790f0: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x3790f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3790f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3790f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3790f8: 0xc103440  jal         func_40D100
    ctx->pc = 0x3790F8u;
    SET_GPR_U32(ctx, 31, 0x379100u);
    ctx->pc = 0x3790FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3790F8u;
    // 0x3790fc: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3790F8u, 0x379100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379100u;
label_379100:
    // 0x379100: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x379100u;
    {
        const bool branch_taken_0x379100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x379104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379100u;
        // 0x379104: 0x123100  sll         $a2, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379100) {
            ctx->pc = 0x379148u;
            goto label_379148;
        }
    }
    ctx->pc = 0x379108u;
    // 0x379108: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x379108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x37910c: 0xc10341a  jal         func_40D068
    ctx->pc = 0x37910Cu;
    SET_GPR_U32(ctx, 31, 0x379114u);
    ctx->pc = 0x379110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37910Cu;
    // 0x379110: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x37910Cu, 0x379114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379114u;
label_379114:
    // 0x379114: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x379114u;
    {
        const bool branch_taken_0x379114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x379118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379114u;
        // 0x379118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379114) {
            ctx->pc = 0x379168u;
            goto label_379168;
        }
    }
    ctx->pc = 0x37911Cu;
    // 0x37911c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x37911cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x379120: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x379120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379124: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x379124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x379128: 0xc10341a  jal         func_40D068
    ctx->pc = 0x379128u;
    SET_GPR_U32(ctx, 31, 0x379130u);
    ctx->pc = 0x37912Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379128u;
    // 0x37912c: 0x63180  sll         $a2, $a2, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x379128u, 0x379130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379130u;
label_379130:
    // 0x379130: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x379130u;
    {
        const bool branch_taken_0x379130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x379134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379130u;
        // 0x379134: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379130) {
            ctx->pc = 0x379148u;
            goto label_379148;
        }
    }
    ctx->pc = 0x379138u;
    // 0x379138: 0xc0de25a  jal         func_378968
    ctx->pc = 0x379138u;
    SET_GPR_U32(ctx, 31, 0x379140u);
    ctx->pc = 0x37913Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379138u;
    // 0x37913c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378968u, 0x379138u, 0x379140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379140u;
label_379140:
    // 0x379140: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x379140u;
    {
        const bool branch_taken_0x379140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x379144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379140u;
        // 0x379144: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379140) {
            ctx->pc = 0x379168u;
            goto label_379168;
        }
    }
    ctx->pc = 0x379148u;
label_379148:
    // 0x379148: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x379148u;
    {
        const bool branch_taken_0x379148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379148u;
        // 0x37914c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379148) {
            ctx->pc = 0x379168u;
            goto label_379168;
        }
    }
    ctx->pc = 0x379150u;
label_379150:
    // 0x379150: 0xc0de83a  jal         func_37A0E8
    ctx->pc = 0x379150u;
    SET_GPR_U32(ctx, 31, 0x379158u);
    ctx->pc = 0x379154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379150u;
    // 0x379154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A0E8u, 0x379150u, 0x379158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379158u;
label_379158:
    // 0x379158: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x379158u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37915c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x37915Cu;
    {
        const bool branch_taken_0x37915c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x379160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37915Cu;
        // 0x379160: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37915c) {
            ctx->pc = 0x379168u;
            goto label_379168;
        }
    }
    ctx->pc = 0x379164u;
label_379164:
    // 0x379164: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x379164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_379168:
    // 0x379168: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x379168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37916c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37916cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x379170: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x379170u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379174: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x379174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379178: 0x3e00008  jr          $ra
    ctx->pc = 0x379178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379178u;
        // 0x37917c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379180u;
}

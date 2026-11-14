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

// Function: sub_0045BB70
// Address: 0x45bb70 - 0x45bcf0
void sub_0045BB70_0x45bb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045BB70_0x45bb70");
#endif

    switch (ctx->pc) {
        case 0x45bb98u: goto label_45bb98;
        case 0x45bbd0u: goto label_45bbd0;
        case 0x45bc10u: goto label_45bc10;
        case 0x45bc20u: goto label_45bc20;
        case 0x45bc4cu: goto label_45bc4c;
        case 0x45bc80u: goto label_45bc80;
        case 0x45bcbcu: goto label_45bcbc;
        default: break;
    }

    ctx->pc = 0x45bb70u;

    // 0x45bb70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x45bb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x45bb74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x45bb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x45bb78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45bb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x45bb7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45bb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x45bb80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45bb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45bb84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45bb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45bb88: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x45bb88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45bb8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x45bb8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45bb90: 0xc116654  jal         func_459950
    ctx->pc = 0x45BB90u;
    SET_GPR_U32(ctx, 31, 0x45BB98u);
    ctx->pc = 0x459950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459950u, 0x45BB90u, 0x45BB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45BB98u;
label_45bb98:
    // 0x45bb98: 0xff82bf68  sd          $v0, -0x4098($gp)
    ctx->pc = 0x45bb98u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294950760), GPR_U64(ctx, 2));
    // 0x45bb9c: 0xdf83bf70  ld          $v1, -0x4090($gp)
    ctx->pc = 0x45bb9cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294950768)));
    // 0x45bba0: 0xdf82bf68  ld          $v0, -0x4098($gp)
    ctx->pc = 0x45bba0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294950760)));
    // 0x45bba4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x45bba4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x45bba8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45BBA8u;
    {
        const bool branch_taken_0x45bba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45bba8) {
            ctx->pc = 0x45BBBCu;
            goto label_45bbbc;
        }
    }
    ctx->pc = 0x45BBB0u;
    // 0x45bbb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45bbb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45bbb4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x45BBB4u;
    {
        const bool branch_taken_0x45bbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bbb4) {
            ctx->pc = 0x45BCCCu;
            goto label_45bccc;
        }
    }
    ctx->pc = 0x45BBBCu;
label_45bbbc:
    // 0x45bbbc: 0xdf82bf68  ld          $v0, -0x4098($gp)
    ctx->pc = 0x45bbbcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294950760)));
    // 0x45bbc0: 0xff82bf70  sd          $v0, -0x4090($gp)
    ctx->pc = 0x45bbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294950768), GPR_U64(ctx, 2));
    // 0x45bbc4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x45bbc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45bbc8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x45BBC8u;
    {
        const bool branch_taken_0x45bbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bbc8) {
            ctx->pc = 0x45BC94u;
            goto label_45bc94;
        }
    }
    ctx->pc = 0x45BBD0u;
label_45bbd0:
    // 0x45bbd0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x45bbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x45bbd4: 0x2782bf48  addiu       $v0, $gp, -0x40B8
    ctx->pc = 0x45bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950728));
    // 0x45bbd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45bbdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45bbe0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x45BBE0u;
    {
        const bool branch_taken_0x45bbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bbe0) {
            ctx->pc = 0x45BC90u;
            goto label_45bc90;
        }
    }
    ctx->pc = 0x45BBE8u;
    // 0x45bbe8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x45bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x45bbec: 0x2782bf60  addiu       $v0, $gp, -0x40A0
    ctx->pc = 0x45bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950752));
    // 0x45bbf0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x45bbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45bbf4: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x45bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x45bbf8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x45bbfc: 0x24424c40  addiu       $v0, $v0, 0x4C40
    ctx->pc = 0x45bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19520));
    // 0x45bc00: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x45bc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45bc04: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x45bc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45bc08: 0xc0c408c  jal         func_310230
    ctx->pc = 0x45BC08u;
    SET_GPR_U32(ctx, 31, 0x45BC10u);
    ctx->pc = 0x310230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310230u, 0x45BC08u, 0x45BC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45BC10u;
label_45bc10:
    // 0x45bc10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x45bc10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45bc14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x45bc14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45bc18: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x45BC18u;
    {
        const bool branch_taken_0x45bc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bc18) {
            ctx->pc = 0x45BC84u;
            goto label_45bc84;
        }
    }
    ctx->pc = 0x45BC20u;
label_45bc20:
    // 0x45bc20: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x45bc20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x45bc24: 0x2782bf60  addiu       $v0, $gp, -0x40A0
    ctx->pc = 0x45bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950752));
    // 0x45bc28: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x45bc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45bc2c: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x45bc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x45bc30: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x45bc34: 0x24424c40  addiu       $v0, $v0, 0x4C40
    ctx->pc = 0x45bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19520));
    // 0x45bc38: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x45bc38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45bc3c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x45bc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45bc40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x45bc40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45bc44: 0xc0c4146  jal         func_310518
    ctx->pc = 0x45BC44u;
    SET_GPR_U32(ctx, 31, 0x45BC4Cu);
    ctx->pc = 0x310518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310518u, 0x45BC44u, 0x45BC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45BC4Cu;
label_45bc4c:
    // 0x45bc4c: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x45bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x45bc50: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x45bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x45bc54: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x45bc54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x45bc58: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x45bc5c: 0x24634920  addiu       $v1, $v1, 0x4920
    ctx->pc = 0x45bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18720));
    // 0x45bc60: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x45bc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45bc64: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x45bc64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x45bc68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45bc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45bc6c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x45bc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x45bc70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45bc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45bc74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x45bc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45bc78: 0xc116cac  jal         func_45B2B0
    ctx->pc = 0x45BC78u;
    SET_GPR_U32(ctx, 31, 0x45BC80u);
    ctx->pc = 0x45B2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B2B0u, 0x45BC78u, 0x45BC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45BC80u;
label_45bc80:
    // 0x45bc80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x45bc80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_45bc84:
    // 0x45bc84: 0x2e220021  sltiu       $v0, $s1, 0x21
    ctx->pc = 0x45bc84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x45bc88: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x45BC88u;
    {
        const bool branch_taken_0x45bc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45bc88) {
            ctx->pc = 0x45BC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45bc20;
        }
    }
    ctx->pc = 0x45BC90u;
label_45bc90:
    // 0x45bc90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x45bc90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_45bc94:
    // 0x45bc94: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x45bc94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x45bc98: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x45BC98u;
    {
        const bool branch_taken_0x45bc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45bc98) {
            ctx->pc = 0x45BBD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45bbd0;
        }
    }
    ctx->pc = 0x45BCA0u;
    // 0x45bca0: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x45bca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x45bca4: 0x24844810  addiu       $a0, $a0, 0x4810
    ctx->pc = 0x45bca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18448));
    // 0x45bca8: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x45bca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x45bcac: 0x24a54920  addiu       $a1, $a1, 0x4920
    ctx->pc = 0x45bcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18720));
    // 0x45bcb0: 0x24060108  addiu       $a2, $zero, 0x108
    ctx->pc = 0x45bcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x45bcb4: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x45BCB4u;
    SET_GPR_U32(ctx, 31, 0x45BCBCu);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x45BCB4u, 0x45BCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45BCBCu;
label_45bcbc:
    // 0x45bcbc: 0xdf82bf50  ld          $v0, -0x40B0($gp)
    ctx->pc = 0x45bcbcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294950736)));
    // 0x45bcc0: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x45bcc0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x45bcc4: 0xff82bf50  sd          $v0, -0x40B0($gp)
    ctx->pc = 0x45bcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294950736), GPR_U64(ctx, 2));
    // 0x45bcc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45bccc:
    // 0x45bccc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x45bcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45bcd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45bcd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45bcd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45bcd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45bcd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45bcd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45bcdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45bcdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45bce0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x45bce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x45bce4: 0x3e00008  jr          $ra
    ctx->pc = 0x45BCE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45BCE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45BCECu;
    // 0x45bcec: 0x0  nop
    ctx->pc = 0x45bcecu;
    // NOP
    ctx->pc = 0x45bcf0u;
}

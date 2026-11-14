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

// Function: sub_003B1810
// Address: 0x3b1810 - 0x3b1880
void sub_003B1810_0x3b1810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1810_0x3b1810");
#endif

    switch (ctx->pc) {
        case 0x3b1810u: goto label_3b1810;
        case 0x3b1814u: goto label_3b1814;
        case 0x3b1818u: goto label_3b1818;
        case 0x3b181cu: goto label_3b181c;
        case 0x3b1820u: goto label_3b1820;
        case 0x3b1824u: goto label_3b1824;
        case 0x3b1828u: goto label_3b1828;
        case 0x3b182cu: goto label_3b182c;
        case 0x3b1830u: goto label_3b1830;
        case 0x3b1834u: goto label_3b1834;
        case 0x3b1838u: goto label_3b1838;
        case 0x3b183cu: goto label_3b183c;
        case 0x3b1840u: goto label_3b1840;
        case 0x3b1844u: goto label_3b1844;
        case 0x3b1848u: goto label_3b1848;
        case 0x3b184cu: goto label_3b184c;
        case 0x3b1850u: goto label_3b1850;
        case 0x3b1854u: goto label_3b1854;
        case 0x3b1858u: goto label_3b1858;
        case 0x3b185cu: goto label_3b185c;
        case 0x3b1860u: goto label_3b1860;
        case 0x3b1864u: goto label_3b1864;
        case 0x3b1868u: goto label_3b1868;
        case 0x3b186cu: goto label_3b186c;
        case 0x3b1870u: goto label_3b1870;
        case 0x3b1874u: goto label_3b1874;
        case 0x3b1878u: goto label_3b1878;
        case 0x3b187cu: goto label_3b187c;
        default: break;
    }

    ctx->pc = 0x3b1810u;

label_3b1810:
    // 0x3b1810: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b1810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b1814:
    // 0x3b1814: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x3b1814u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_3b1818:
    // 0x3b1818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b1818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b181c:
    // 0x3b181c: 0x8c62e998  lw          $v0, -0x1668($v1)
    ctx->pc = 0x3b181cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961560)));
label_3b1820:
    // 0x3b1820: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b1820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b1824:
    // 0x3b1824: 0x8cc4d3a4  lw          $a0, -0x2C5C($a2)
    ctx->pc = 0x3b1824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294955940)));
label_3b1828:
    // 0x3b1828: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b1828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3b182c:
    // 0x3b182c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b182cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b1830:
    // 0x3b1830: 0x40f809  jalr        $v0
label_3b1834:
    if (ctx->pc == 0x3B1834u) {
        ctx->pc = 0x3B1834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1830u;
        // 0x3b1834: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1838u;
        goto label_3b1838;
    }
    ctx->pc = 0x3B1830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B1838u);
        ctx->pc = 0x3B1834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1830u;
        // 0x3b1834: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1830u, 0x3B1838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1838u;
label_3b1838:
    // 0x3b1838: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b1838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b183c:
    // 0x3b183c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_3b1840:
    if (ctx->pc == 0x3B1840u) {
        ctx->pc = 0x3B1840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B183Cu;
        // 0x3b1840: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1844u;
        goto label_3b1844;
    }
    ctx->pc = 0x3B183Cu;
    {
        const bool branch_taken_0x3b183c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B183Cu;
        // 0x3b1840: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b183c) {
            ctx->pc = 0x3B1868u;
            goto label_3b1868;
        }
    }
    ctx->pc = 0x3B1844u;
label_3b1844:
    // 0x3b1844: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3b1844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3b1848:
    // 0x3b1848: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3b1848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3b184c:
    // 0x3b184c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b184cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b1850:
    // 0x3b1850: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3b1850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3b1854:
    // 0x3b1854: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3b1854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_3b1858:
    // 0x3b1858: 0xae100018  sw          $s0, 0x18($s0)
    ctx->pc = 0x3b1858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 16));
label_3b185c:
    // 0x3b185c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3b185cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_3b1860:
    // 0x3b1860: 0xc0ec64a  jal         func_3B1928
label_3b1864:
    if (ctx->pc == 0x3B1864u) {
        ctx->pc = 0x3B1864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1860u;
        // 0x3b1864: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1868u;
        goto label_3b1868;
    }
    ctx->pc = 0x3B1860u;
    SET_GPR_U32(ctx, 31, 0x3B1868u);
    ctx->pc = 0x3B1864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1860u;
    // 0x3b1864: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1928u, 0x3B1860u, 0x3B1868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1868u;
label_3b1868:
    // 0x3b1868: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b1868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b186c:
    // 0x3b186c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b186cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b1870:
    // 0x3b1870: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b1870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b1874:
    // 0x3b1874: 0x3e00008  jr          $ra
label_3b1878:
    if (ctx->pc == 0x3B1878u) {
        ctx->pc = 0x3B1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1874u;
        // 0x3b1878: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B187Cu;
        goto label_3b187c;
    }
    ctx->pc = 0x3B1874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1874u;
        // 0x3b1878: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B187Cu;
label_3b187c:
    // 0x3b187c: 0x0  nop
    ctx->pc = 0x3b187cu;
    // NOP
    ctx->pc = 0x3b1880u;
}

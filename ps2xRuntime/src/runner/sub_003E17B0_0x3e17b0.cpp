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

// Function: sub_003E17B0
// Address: 0x3e17b0 - 0x3e1818
void sub_003E17B0_0x3e17b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E17B0_0x3e17b0");
#endif

    switch (ctx->pc) {
        case 0x3e1800u: goto label_3e1800;
        default: break;
    }

    ctx->pc = 0x3e17b0u;

    // 0x3e17b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e17b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e17b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e17b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3e17b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e17b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e17bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e17bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e17c0: 0x92020200  lbu         $v0, 0x200($s0)
    ctx->pc = 0x3e17c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x3e17c4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3e17c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3e17c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E17C8u;
    {
        const bool branch_taken_0x3e17c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E17CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E17C8u;
        // 0x3e17cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e17c8) {
            ctx->pc = 0x3E17E4u;
            goto label_3e17e4;
        }
    }
    ctx->pc = 0x3E17D0u;
    // 0x3e17d0: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x3e17d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3e17d4: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x3e17d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x3e17d8: 0x38420300  xori        $v0, $v0, 0x300
    ctx->pc = 0x3e17d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)768);
    // 0x3e17dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E17DCu;
    {
        const bool branch_taken_0x3e17dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E17E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E17DCu;
        // 0x3e17e0: 0x2180a  movz        $v1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e17dc) {
            ctx->pc = 0x3E17F0u;
            goto label_3e17f0;
        }
    }
    ctx->pc = 0x3E17E4u;
label_3e17e4:
    // 0x3e17e4: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x3e17e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3e17e8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3e17e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x3e17ec: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x3e17ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_3e17f0:
    // 0x3e17f0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E17F0u;
    {
        const bool branch_taken_0x3e17f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e17f0) {
            ctx->pc = 0x3E17F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E17F0u;
            // 0x3e17f4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1808u;
            goto label_3e1808;
        }
    }
    ctx->pc = 0x3E17F8u;
    // 0x3e17f8: 0xc0f82be  jal         func_3E0AF8
    ctx->pc = 0x3E17F8u;
    SET_GPR_U32(ctx, 31, 0x3E1800u);
    ctx->pc = 0x3E17FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E17F8u;
    // 0x3e17fc: 0xde0401f0  ld          $a0, 0x1F0($s0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 496)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0AF8u, 0x3E17F8u, 0x3E1800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1800u;
label_3e1800:
    // 0x3e1800: 0xfe0201f0  sd          $v0, 0x1F0($s0)
    ctx->pc = 0x3e1800u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 496), GPR_U64(ctx, 2));
    // 0x3e1804: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e1804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e1808:
    // 0x3e1808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e1808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e180c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E180Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E180Cu;
        // 0x3e1810: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E180Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1814u;
    // 0x3e1814: 0x0  nop
    ctx->pc = 0x3e1814u;
    // NOP
    ctx->pc = 0x3e1818u;
}

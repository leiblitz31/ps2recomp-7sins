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

// Function: sub_00385B88
// Address: 0x385b88 - 0x385c30
void sub_00385B88_0x385b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385B88_0x385b88");
#endif

    switch (ctx->pc) {
        case 0x385b9cu: goto label_385b9c;
        default: break;
    }

    ctx->pc = 0x385b88u;

    // 0x385b88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x385b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x385b8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x385b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x385b90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x385b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x385b94: 0xc0e1570  jal         func_3855C0
    ctx->pc = 0x385B94u;
    SET_GPR_U32(ctx, 31, 0x385B9Cu);
    ctx->pc = 0x385B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385B94u;
    // 0x385b98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3855C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3855C0u, 0x385B94u, 0x385B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385B9Cu;
label_385b9c:
    // 0x385b9c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x385B9Cu;
    {
        const bool branch_taken_0x385b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x385BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385B9Cu;
        // 0x385ba0: 0x8f85bd00  lw          $a1, -0x4300($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385b9c) {
            ctx->pc = 0x385C18u;
            goto label_385c18;
        }
    }
    ctx->pc = 0x385BA4u;
    // 0x385ba4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x385ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x385ba8: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x385ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x385bac: 0x24a60008  addiu       $a2, $a1, 0x8
    ctx->pc = 0x385bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x385bb0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x385bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x385bb4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x385bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x385bb8: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x385bb8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x385bbc: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x385bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x385bc0: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x385bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x385bc4: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x385bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x385bc8: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x385bc8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x385bcc: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x385bccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x385bd0: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x385bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x385bd4: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x385bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x385bd8: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x385bd8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x385bdc: 0x8cc80014  lw          $t0, 0x14($a2)
    ctx->pc = 0x385bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x385be0: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x385be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x385be4: 0x8cc90018  lw          $t1, 0x18($a2)
    ctx->pc = 0x385be4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x385be8: 0x67100b  movn        $v0, $v1, $a3
    ctx->pc = 0x385be8u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x385bec: 0x8cca001c  lw          $t2, 0x1C($a2)
    ctx->pc = 0x385becu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x385bf0: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x385bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x385bf4: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x385bf4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x385bf8: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x385bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x385bfc: 0x88100b  movn        $v0, $a0, $t0
    ctx->pc = 0x385bfcu;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x385c00: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x385c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x385c04: 0x69100b  movn        $v0, $v1, $t1
    ctx->pc = 0x385c04u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x385c08: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x385c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x385c0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x385C0Cu;
    {
        const bool branch_taken_0x385c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C0Cu;
        // 0x385c10: 0x8a100b  movn        $v0, $a0, $t2 (Delay Slot)
        if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385c0c) {
            ctx->pc = 0x385C1Cu;
            goto label_385c1c;
        }
    }
    ctx->pc = 0x385C14u;
    // 0x385c14: 0x0  nop
    ctx->pc = 0x385c14u;
    // NOP
label_385c18:
    // 0x385c18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x385c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_385c1c:
    // 0x385c1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x385c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x385c20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x385c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x385c24: 0x3e00008  jr          $ra
    ctx->pc = 0x385C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385C24u;
        // 0x385c28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385C2Cu;
    // 0x385c2c: 0x0  nop
    ctx->pc = 0x385c2cu;
    // NOP
    ctx->pc = 0x385c30u;
}

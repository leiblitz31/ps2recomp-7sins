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

// Function: sub_003A7CA8
// Address: 0x3a7ca8 - 0x3a7d18
void sub_003A7CA8_0x3a7ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7CA8_0x3a7ca8");
#endif

    switch (ctx->pc) {
        case 0x3a7ca8u: goto label_3a7ca8;
        case 0x3a7cacu: goto label_3a7cac;
        case 0x3a7cb0u: goto label_3a7cb0;
        case 0x3a7cb4u: goto label_3a7cb4;
        case 0x3a7cb8u: goto label_3a7cb8;
        case 0x3a7cbcu: goto label_3a7cbc;
        case 0x3a7cc0u: goto label_3a7cc0;
        case 0x3a7cc4u: goto label_3a7cc4;
        case 0x3a7cc8u: goto label_3a7cc8;
        case 0x3a7cccu: goto label_3a7ccc;
        case 0x3a7cd0u: goto label_3a7cd0;
        case 0x3a7cd4u: goto label_3a7cd4;
        case 0x3a7cd8u: goto label_3a7cd8;
        case 0x3a7cdcu: goto label_3a7cdc;
        case 0x3a7ce0u: goto label_3a7ce0;
        case 0x3a7ce4u: goto label_3a7ce4;
        case 0x3a7ce8u: goto label_3a7ce8;
        case 0x3a7cecu: goto label_3a7cec;
        case 0x3a7cf0u: goto label_3a7cf0;
        case 0x3a7cf4u: goto label_3a7cf4;
        case 0x3a7cf8u: goto label_3a7cf8;
        case 0x3a7cfcu: goto label_3a7cfc;
        case 0x3a7d00u: goto label_3a7d00;
        case 0x3a7d04u: goto label_3a7d04;
        case 0x3a7d08u: goto label_3a7d08;
        case 0x3a7d0cu: goto label_3a7d0c;
        case 0x3a7d10u: goto label_3a7d10;
        case 0x3a7d14u: goto label_3a7d14;
        default: break;
    }

    ctx->pc = 0x3a7ca8u;

label_3a7ca8:
    // 0x3a7ca8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3a7ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3a7cac:
    // 0x3a7cac: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a7cacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3a7cb0:
    // 0x3a7cb0: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3a7cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3a7cb4:
    // 0x3a7cb4: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x3a7cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_3a7cb8:
    // 0x3a7cb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a7cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a7cbc:
    // 0x3a7cbc: 0x24042400  addiu       $a0, $zero, 0x2400
    ctx->pc = 0x3a7cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9216));
label_3a7cc0:
    // 0x3a7cc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a7cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a7cc4:
    // 0x3a7cc4: 0x40f809  jalr        $v0
label_3a7cc8:
    if (ctx->pc == 0x3A7CC8u) {
        ctx->pc = 0x3A7CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7CC4u;
        // 0x3a7cc8: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7CCCu;
        goto label_3a7ccc;
    }
    ctx->pc = 0x3A7CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A7CCCu);
        ctx->pc = 0x3A7CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7CC4u;
        // 0x3a7cc8: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7CC4u, 0x3A7CCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A7CCCu;
label_3a7ccc:
    // 0x3a7ccc: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3a7cccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_3a7cd0:
    // 0x3a7cd0: 0x8f85aa9c  lw          $a1, -0x5564($gp)
    ctx->pc = 0x3a7cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945436)));
label_3a7cd4:
    // 0x3a7cd4: 0x2610ce80  addiu       $s0, $s0, -0x3180
    ctx->pc = 0x3a7cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954624));
label_3a7cd8:
    // 0x3a7cd8: 0x8f87aaa0  lw          $a3, -0x5560($gp)
    ctx->pc = 0x3a7cd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945440)));
label_3a7cdc:
    // 0x3a7cdc: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x3a7cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_3a7ce0:
    // 0x3a7ce0: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x3a7ce0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
label_3a7ce4:
    // 0x3a7ce4: 0xae020504  sw          $v0, 0x504($s0)
    ctx->pc = 0x3a7ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1284), GPR_U32(ctx, 2));
label_3a7ce8:
    // 0x3a7ce8: 0x2508ce00  addiu       $t0, $t0, -0x3200
    ctx->pc = 0x3a7ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954496));
label_3a7cec:
    // 0x3a7cec: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x3a7cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_3a7cf0:
    // 0x3a7cf0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3a7cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3a7cf4:
    // 0x3a7cf4: 0xc10408c  jal         func_410230
label_3a7cf8:
    if (ctx->pc == 0x3A7CF8u) {
        ctx->pc = 0x3A7CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7CF4u;
        // 0x3a7cf8: 0x352901a2  ori         $t1, $t1, 0x1A2 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)418);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7CFCu;
        goto label_3a7cfc;
    }
    ctx->pc = 0x3A7CF4u;
    SET_GPR_U32(ctx, 31, 0x3A7CFCu);
    ctx->pc = 0x3A7CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7CF4u;
    // 0x3a7cf8: 0x352901a2  ori         $t1, $t1, 0x1A2 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)418);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x3A7CF4u, 0x3A7CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7CFCu;
label_3a7cfc:
    // 0x3a7cfc: 0xae020500  sw          $v0, 0x500($s0)
    ctx->pc = 0x3a7cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1280), GPR_U32(ctx, 2));
label_3a7d00:
    // 0x3a7d00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a7d00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a7d04:
    // 0x3a7d04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a7d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a7d08:
    // 0x3a7d08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a7d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a7d0c:
    // 0x3a7d0c: 0x3e00008  jr          $ra
label_3a7d10:
    if (ctx->pc == 0x3A7D10u) {
        ctx->pc = 0x3A7D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7D0Cu;
        // 0x3a7d10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7D14u;
        goto label_3a7d14;
    }
    ctx->pc = 0x3A7D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7D0Cu;
        // 0x3a7d10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7D14u;
label_3a7d14:
    // 0x3a7d14: 0x0  nop
    ctx->pc = 0x3a7d14u;
    // NOP
    ctx->pc = 0x3a7d18u;
}

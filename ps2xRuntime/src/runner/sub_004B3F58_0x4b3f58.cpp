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

// Function: sub_004B3F58
// Address: 0x4b3f58 - 0x4b4090
void sub_004B3F58_0x4b3f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3F58_0x4b3f58");
#endif

    switch (ctx->pc) {
        case 0x4b3f58u: goto label_4b3f58;
        case 0x4b3f5cu: goto label_4b3f5c;
        case 0x4b3f60u: goto label_4b3f60;
        case 0x4b3f64u: goto label_4b3f64;
        case 0x4b3f68u: goto label_4b3f68;
        case 0x4b3f6cu: goto label_4b3f6c;
        case 0x4b3f70u: goto label_4b3f70;
        case 0x4b3f74u: goto label_4b3f74;
        case 0x4b3f78u: goto label_4b3f78;
        case 0x4b3f7cu: goto label_4b3f7c;
        case 0x4b3f80u: goto label_4b3f80;
        case 0x4b3f84u: goto label_4b3f84;
        case 0x4b3f88u: goto label_4b3f88;
        case 0x4b3f8cu: goto label_4b3f8c;
        case 0x4b3f90u: goto label_4b3f90;
        case 0x4b3f94u: goto label_4b3f94;
        case 0x4b3f98u: goto label_4b3f98;
        case 0x4b3f9cu: goto label_4b3f9c;
        case 0x4b3fa0u: goto label_4b3fa0;
        case 0x4b3fa4u: goto label_4b3fa4;
        case 0x4b3fa8u: goto label_4b3fa8;
        case 0x4b3facu: goto label_4b3fac;
        case 0x4b3fb0u: goto label_4b3fb0;
        case 0x4b3fb4u: goto label_4b3fb4;
        case 0x4b3fb8u: goto label_4b3fb8;
        case 0x4b3fbcu: goto label_4b3fbc;
        case 0x4b3fc0u: goto label_4b3fc0;
        case 0x4b3fc4u: goto label_4b3fc4;
        case 0x4b3fc8u: goto label_4b3fc8;
        case 0x4b3fccu: goto label_4b3fcc;
        case 0x4b3fd0u: goto label_4b3fd0;
        case 0x4b3fd4u: goto label_4b3fd4;
        case 0x4b3fd8u: goto label_4b3fd8;
        case 0x4b3fdcu: goto label_4b3fdc;
        case 0x4b3fe0u: goto label_4b3fe0;
        case 0x4b3fe4u: goto label_4b3fe4;
        case 0x4b3fe8u: goto label_4b3fe8;
        case 0x4b3fecu: goto label_4b3fec;
        case 0x4b3ff0u: goto label_4b3ff0;
        case 0x4b3ff4u: goto label_4b3ff4;
        case 0x4b3ff8u: goto label_4b3ff8;
        case 0x4b3ffcu: goto label_4b3ffc;
        case 0x4b4000u: goto label_4b4000;
        case 0x4b4004u: goto label_4b4004;
        case 0x4b4008u: goto label_4b4008;
        case 0x4b400cu: goto label_4b400c;
        case 0x4b4010u: goto label_4b4010;
        case 0x4b4014u: goto label_4b4014;
        case 0x4b4018u: goto label_4b4018;
        case 0x4b401cu: goto label_4b401c;
        case 0x4b4020u: goto label_4b4020;
        case 0x4b4024u: goto label_4b4024;
        case 0x4b4028u: goto label_4b4028;
        case 0x4b402cu: goto label_4b402c;
        case 0x4b4030u: goto label_4b4030;
        case 0x4b4034u: goto label_4b4034;
        case 0x4b4038u: goto label_4b4038;
        case 0x4b403cu: goto label_4b403c;
        case 0x4b4040u: goto label_4b4040;
        case 0x4b4044u: goto label_4b4044;
        case 0x4b4048u: goto label_4b4048;
        case 0x4b404cu: goto label_4b404c;
        case 0x4b4050u: goto label_4b4050;
        case 0x4b4054u: goto label_4b4054;
        case 0x4b4058u: goto label_4b4058;
        case 0x4b405cu: goto label_4b405c;
        case 0x4b4060u: goto label_4b4060;
        case 0x4b4064u: goto label_4b4064;
        case 0x4b4068u: goto label_4b4068;
        case 0x4b406cu: goto label_4b406c;
        case 0x4b4070u: goto label_4b4070;
        case 0x4b4074u: goto label_4b4074;
        case 0x4b4078u: goto label_4b4078;
        case 0x4b407cu: goto label_4b407c;
        case 0x4b4080u: goto label_4b4080;
        case 0x4b4084u: goto label_4b4084;
        case 0x4b4088u: goto label_4b4088;
        case 0x4b408cu: goto label_4b408c;
        default: break;
    }

    ctx->pc = 0x4b3f58u;

label_4b3f58:
    // 0x4b3f58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b3f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4b3f5c:
    // 0x4b3f5c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4b3f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4b3f60:
    // 0x4b3f60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b3f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4b3f64:
    // 0x4b3f64: 0xc1298cc  jal         func_4A6330
label_4b3f68:
    if (ctx->pc == 0x4B3F68u) {
        ctx->pc = 0x4B3F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3F64u;
        // 0x4b3f68: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3F6Cu;
        goto label_4b3f6c;
    }
    ctx->pc = 0x4B3F64u;
    SET_GPR_U32(ctx, 31, 0x4B3F6Cu);
    ctx->pc = 0x4B3F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3F64u;
    // 0x4b3f68: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6330u, 0x4B3F64u, 0x4B3F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3F6Cu;
label_4b3f6c:
    // 0x4b3f6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b3f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b3f70:
    // 0x4b3f70: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4b3f70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4b3f74:
    // 0x4b3f74: 0x3e00008  jr          $ra
label_4b3f78:
    if (ctx->pc == 0x4B3F78u) {
        ctx->pc = 0x4B3F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3F74u;
        // 0x4b3f78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3F7Cu;
        goto label_4b3f7c;
    }
    ctx->pc = 0x4B3F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3F74u;
        // 0x4b3f78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3F7Cu;
label_4b3f7c:
    // 0x4b3f7c: 0x0  nop
    ctx->pc = 0x4b3f7cu;
    // NOP
label_4b3f80:
    // 0x4b3f80: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b3f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4b3f84:
    // 0x4b3f84: 0x2442ee00  addiu       $v0, $v0, -0x1200
    ctx->pc = 0x4b3f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
label_4b3f88:
    // 0x4b3f88: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x4b3f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4b3f8c:
    // 0x4b3f8c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_4b3f90:
    if (ctx->pc == 0x4B3F90u) {
        ctx->pc = 0x4B3F94u;
        goto label_4b3f94;
    }
    ctx->pc = 0x4B3F8Cu;
    {
        const bool branch_taken_0x4b3f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b3f8c) {
            ctx->pc = 0x4B3FA8u;
            goto label_4b3fa8;
        }
    }
    ctx->pc = 0x4B3F94u;
label_4b3f94:
    // 0x4b3f94: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x4b3f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_4b3f98:
    // 0x4b3f98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4b3f98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4b3f9c:
    // 0x4b3f9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b3f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4b3fa0:
    // 0x4b3fa0: 0x3e00008  jr          $ra
label_4b3fa4:
    if (ctx->pc == 0x4B3FA4u) {
        ctx->pc = 0x4B3FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3FA0u;
        // 0x4b3fa4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3FA8u;
        goto label_4b3fa8;
    }
    ctx->pc = 0x4B3FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3FA0u;
        // 0x4b3fa4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3FA8u;
label_4b3fa8:
    // 0x4b3fa8: 0x3e00008  jr          $ra
label_4b3fac:
    if (ctx->pc == 0x4B3FACu) {
        ctx->pc = 0x4B3FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3FA8u;
        // 0x4b3fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3FB0u;
        goto label_4b3fb0;
    }
    ctx->pc = 0x4B3FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3FA8u;
        // 0x4b3fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3FB0u;
label_4b3fb0:
    // 0x4b3fb0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b3fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b3fb4:
    // 0x4b3fb4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b3fb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4b3fb8:
    // 0x4b3fb8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4b3fb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4b3fbc:
    // 0x4b3fbc: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x4b3fbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4b3fc0:
    // 0x4b3fc0: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x4b3fc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4b3fc4:
    // 0x4b3fc4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x4b3fc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4b3fc8:
    // 0x4b3fc8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4b3fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4b3fcc:
    // 0x4b3fcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b3fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4b3fd0:
    // 0x4b3fd0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x4b3fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_4b3fd4:
    // 0x4b3fd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4b3fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b3fd8:
    // 0x4b3fd8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4b3fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4b3fdc:
    // 0x4b3fdc: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x4b3fdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4b3fe0:
    // 0x4b3fe0: 0xc129a9c  jal         func_4A6A70
label_4b3fe4:
    if (ctx->pc == 0x4B3FE4u) {
        ctx->pc = 0x4B3FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3FE0u;
        // 0x4b3fe4: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3FE8u;
        goto label_4b3fe8;
    }
    ctx->pc = 0x4B3FE0u;
    SET_GPR_U32(ctx, 31, 0x4B3FE8u);
    ctx->pc = 0x4B3FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3FE0u;
    // 0x4b3fe4: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6A70u, 0x4B3FE0u, 0x4B3FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3FE8u;
label_4b3fe8:
    // 0x4b3fe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b3fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b3fec:
    // 0x4b3fec: 0x3e00008  jr          $ra
label_4b3ff0:
    if (ctx->pc == 0x4B3FF0u) {
        ctx->pc = 0x4B3FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3FECu;
        // 0x4b3ff0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B3FF4u;
        goto label_4b3ff4;
    }
    ctx->pc = 0x4B3FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3FECu;
        // 0x4b3ff0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3FF4u;
label_4b3ff4:
    // 0x4b3ff4: 0x0  nop
    ctx->pc = 0x4b3ff4u;
    // NOP
label_4b3ff8:
    // 0x4b3ff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b3ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4b3ffc:
    // 0x4b3ffc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b3ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4b4000:
    // 0x4b4000: 0xc12a0c4  jal         func_4A8310
label_4b4004:
    if (ctx->pc == 0x4B4004u) {
        ctx->pc = 0x4B4008u;
        goto label_4b4008;
    }
    ctx->pc = 0x4B4000u;
    SET_GPR_U32(ctx, 31, 0x4B4008u);
    ctx->pc = 0x4A8310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8310u, 0x4B4000u, 0x4B4008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4008u;
label_4b4008:
    // 0x4b4008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b4008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b400c:
    // 0x4b400c: 0x3e00008  jr          $ra
label_4b4010:
    if (ctx->pc == 0x4B4010u) {
        ctx->pc = 0x4B4010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B400Cu;
        // 0x4b4010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B4014u;
        goto label_4b4014;
    }
    ctx->pc = 0x4B400Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B400Cu;
        // 0x4b4010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B400Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4014u;
label_4b4014:
    // 0x4b4014: 0x0  nop
    ctx->pc = 0x4b4014u;
    // NOP
label_4b4018:
    // 0x4b4018: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x4b4018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_4b401c:
    // 0x4b401c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b401cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b4020:
    // 0x4b4020: 0x8c427c88  lw          $v0, 0x7C88($v0)
    ctx->pc = 0x4b4020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31880)));
label_4b4024:
    // 0x4b4024: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b4024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4b4028:
    // 0x4b4028: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_4b402c:
    if (ctx->pc == 0x4B402Cu) {
        ctx->pc = 0x4B402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4028u;
        // 0x4b402c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B4030u;
        goto label_4b4030;
    }
    ctx->pc = 0x4B4028u;
    {
        const bool branch_taken_0x4b4028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4028u;
        // 0x4b402c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4028) {
            ctx->pc = 0x4B404Cu;
            goto label_4b404c;
        }
    }
    ctx->pc = 0x4B4030u;
label_4b4030:
    // 0x4b4030: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x4b4030u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
label_4b4034:
    // 0x4b4034: 0x2610ee50  addiu       $s0, $s0, -0x11B0
    ctx->pc = 0x4b4034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962768));
label_4b4038:
    // 0x4b4038: 0xc12d3f8  jal         func_4B4FE0
label_4b403c:
    if (ctx->pc == 0x4B403Cu) {
        ctx->pc = 0x4B403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4038u;
        // 0x4b403c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B4040u;
        goto label_4b4040;
    }
    ctx->pc = 0x4B4038u;
    SET_GPR_U32(ctx, 31, 0x4B4040u);
    ctx->pc = 0x4B403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4038u;
    // 0x4b403c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4FE0u, 0x4B4038u, 0x4B4040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4040u;
label_4b4040:
    // 0x4b4040: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x4b4040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4b4044:
    // 0x4b4044: 0x10000003  b           . + 4 + (0x3 << 2)
label_4b4048:
    if (ctx->pc == 0x4B4048u) {
        ctx->pc = 0x4B4048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4044u;
        // 0x4b4048: 0x431018  mult        $v0, $v0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B404Cu;
        goto label_4b404c;
    }
    ctx->pc = 0x4B4044u;
    {
        const bool branch_taken_0x4b4044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4044u;
        // 0x4b4048: 0x431018  mult        $v0, $v0, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4044) {
            ctx->pc = 0x4B4054u;
            goto label_4b4054;
        }
    }
    ctx->pc = 0x4B404Cu;
label_4b404c:
    // 0x4b404c: 0x40f809  jalr        $v0
label_4b4050:
    if (ctx->pc == 0x4B4050u) {
        ctx->pc = 0x4B4054u;
        goto label_4b4054;
    }
    ctx->pc = 0x4B404Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B4054u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B404Cu, 0x4B4054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B4054u;
label_4b4054:
    // 0x4b4054: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b4054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b4058:
    // 0x4b4058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b4058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b405c:
    // 0x4b405c: 0x3e00008  jr          $ra
label_4b4060:
    if (ctx->pc == 0x4B4060u) {
        ctx->pc = 0x4B4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B405Cu;
        // 0x4b4060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B4064u;
        goto label_4b4064;
    }
    ctx->pc = 0x4B405Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B405Cu;
        // 0x4b4060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B405Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4064u;
label_4b4064:
    // 0x4b4064: 0x0  nop
    ctx->pc = 0x4b4064u;
    // NOP
label_4b4068:
    // 0x4b4068: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x4b4068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_4b406c:
    // 0x4b406c: 0x24477c80  addiu       $a3, $v0, 0x7C80
    ctx->pc = 0x4b406cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 31872));
label_4b4070:
    // 0x4b4070: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x4b4070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4b4074:
    // 0x4b4074: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x4b4074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4b4078:
    // 0x4b4078: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x4b4078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4b407c:
    // 0x4b407c: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x4b407cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4b4080:
    // 0x4b4080: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x4b4080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4b4084:
    // 0x4b4084: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x4b4084u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
label_4b4088:
    // 0x4b4088: 0x3e00008  jr          $ra
label_4b408c:
    if (ctx->pc == 0x4B408Cu) {
        ctx->pc = 0x4B4090u;
        goto label_fallthrough_0x4b4088;
    }
    ctx->pc = 0x4B4088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4b4088:
    ctx->pc = 0x4B4090u;
}

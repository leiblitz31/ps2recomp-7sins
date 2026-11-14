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

// Function: sub_00229E30
// Address: 0x229e30 - 0x229f80
void sub_00229E30_0x229e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229E30_0x229e30");
#endif

    switch (ctx->pc) {
        case 0x229e50u: goto label_229e50;
        case 0x229e60u: goto label_229e60;
        case 0x229e78u: goto label_229e78;
        case 0x229e88u: goto label_229e88;
        case 0x229e98u: goto label_229e98;
        case 0x229ea8u: goto label_229ea8;
        case 0x229ebcu: goto label_229ebc;
        case 0x229eccu: goto label_229ecc;
        case 0x229ee0u: goto label_229ee0;
        case 0x229f04u: goto label_229f04;
        case 0x229f10u: goto label_229f10;
        case 0x229f2cu: goto label_229f2c;
        case 0x229f40u: goto label_229f40;
        case 0x229f54u: goto label_229f54;
        default: break;
    }

    ctx->pc = 0x229e30u;

    // 0x229e30: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x229e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x229e34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x229e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x229e38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x229e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x229e3c: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x229e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x229e40: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x229e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x229e44: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x229e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x229e48: 0xc08a240  jal         func_228900
    ctx->pc = 0x229E48u;
    SET_GPR_U32(ctx, 31, 0x229E50u);
    ctx->pc = 0x228900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228900u, 0x229E48u, 0x229E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E50u;
label_229e50:
    // 0x229e50: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x229e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x229e54: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x229e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x229e58: 0xc040304  jal         func_100C10
    ctx->pc = 0x229E58u;
    SET_GPR_U32(ctx, 31, 0x229E60u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x229E58u, 0x229E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E60u;
label_229e60:
    // 0x229e60: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x229e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x229e64: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x229e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x229e68: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x229e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x229e6c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x229e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x229e70: 0xc08a92c  jal         func_22A4B0
    ctx->pc = 0x229E70u;
    SET_GPR_U32(ctx, 31, 0x229E78u);
    ctx->pc = 0x22A4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A4B0u, 0x229E70u, 0x229E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E78u;
label_229e78:
    // 0x229e78: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x229e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x229e7c: 0x27a50084  addiu       $a1, $sp, 0x84
    ctx->pc = 0x229e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x229e80: 0xc08a214  jal         func_228850
    ctx->pc = 0x229E80u;
    SET_GPR_U32(ctx, 31, 0x229E88u);
    ctx->pc = 0x228850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228850u, 0x229E80u, 0x229E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E88u;
label_229e88:
    // 0x229e88: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x229e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x229e8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x229e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229e90: 0xc08a204  jal         func_228810
    ctx->pc = 0x229E90u;
    SET_GPR_U32(ctx, 31, 0x229E98u);
    ctx->pc = 0x228810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228810u, 0x229E90u, 0x229E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229E98u;
label_229e98:
    // 0x229e98: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x229e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x229e9c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x229e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x229ea0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x229EA0u;
    SET_GPR_U32(ctx, 31, 0x229EA8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x229EA0u, 0x229EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229EA8u;
label_229ea8:
    // 0x229ea8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x229ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x229eac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x229eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x229eb0: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x229eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x229eb4: 0xc08a1b4  jal         func_2286D0
    ctx->pc = 0x229EB4u;
    SET_GPR_U32(ctx, 31, 0x229EBCu);
    ctx->pc = 0x2286D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2286D0u, 0x229EB4u, 0x229EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229EBCu;
label_229ebc:
    // 0x229ebc: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x229ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x229ec0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x229ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x229ec4: 0xc041998  jal         func_106660
    ctx->pc = 0x229EC4u;
    SET_GPR_U32(ctx, 31, 0x229ECCu);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x229EC4u, 0x229ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229ECCu;
label_229ecc:
    // 0x229ecc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x229ECCu;
    {
        const bool branch_taken_0x229ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229ecc) {
            ctx->pc = 0x229EECu;
            goto label_229eec;
        }
    }
    ctx->pc = 0x229ED4u;
    // 0x229ed4: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x229ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x229ed8: 0xc08a1f0  jal         func_2287C0
    ctx->pc = 0x229ED8u;
    SET_GPR_U32(ctx, 31, 0x229EE0u);
    ctx->pc = 0x2287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C0u, 0x229ED8u, 0x229EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229EE0u;
label_229ee0:
    // 0x229ee0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x229ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x229ee4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x229EE4u;
    {
        const bool branch_taken_0x229ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229ee4) {
            ctx->pc = 0x229F64u;
            goto label_229f64;
        }
    }
    ctx->pc = 0x229EECu;
label_229eec:
    // 0x229eec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x229eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x229ef0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x229ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x229ef4: 0x24a5b8c0  addiu       $a1, $a1, -0x4740
    ctx->pc = 0x229ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949056));
    // 0x229ef8: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x229ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x229efc: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x229EFCu;
    SET_GPR_U32(ctx, 31, 0x229F04u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x229EFCu, 0x229F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F04u;
label_229f04:
    // 0x229f04: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x229f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x229f08: 0xc0c7098  jal         func_31C260
    ctx->pc = 0x229F08u;
    SET_GPR_U32(ctx, 31, 0x229F10u);
    ctx->pc = 0x31C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C260u, 0x229F08u, 0x229F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F10u;
label_229f10:
    // 0x229f10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229f14: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x229F14u;
    {
        const bool branch_taken_0x229f14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x229f14) {
            ctx->pc = 0x229F60u;
            goto label_229f60;
        }
    }
    ctx->pc = 0x229F1Cu;
    // 0x229f1c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x229f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x229f20: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x229f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x229f24: 0xc040304  jal         func_100C10
    ctx->pc = 0x229F24u;
    SET_GPR_U32(ctx, 31, 0x229F2Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x229F24u, 0x229F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F2Cu;
label_229f2c:
    // 0x229f2c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x229f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x229f30: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x229f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x229f34: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x229f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x229f38: 0xc08a7e0  jal         func_229F80
    ctx->pc = 0x229F38u;
    SET_GPR_U32(ctx, 31, 0x229F40u);
    ctx->pc = 0x229F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229F80u, 0x229F38u, 0x229F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F40u;
label_229f40:
    // 0x229f40: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x229f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x229f44: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x229f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x229f48: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x229f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x229f4c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x229F4Cu;
    SET_GPR_U32(ctx, 31, 0x229F54u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x229F4Cu, 0x229F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229F54u;
label_229f54:
    // 0x229f54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x229f54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229f58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x229F58u;
    {
        const bool branch_taken_0x229f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229f58) {
            ctx->pc = 0x229F64u;
            goto label_229f64;
        }
    }
    ctx->pc = 0x229F60u;
label_229f60:
    // 0x229f60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x229f60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229f64:
    // 0x229f64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x229f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229f68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x229f68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229f6c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x229f6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x229f70: 0x3e00008  jr          $ra
    ctx->pc = 0x229F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229F78u;
    // 0x229f78: 0x0  nop
    ctx->pc = 0x229f78u;
    // NOP
    // 0x229f7c: 0x0  nop
    ctx->pc = 0x229f7cu;
    // NOP
    ctx->pc = 0x229f80u;
}

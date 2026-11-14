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

// Function: sub_00275E10
// Address: 0x275e10 - 0x275f70
void sub_00275E10_0x275e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275E10_0x275e10");
#endif

    switch (ctx->pc) {
        case 0x275e28u: goto label_275e28;
        case 0x275e68u: goto label_275e68;
        case 0x275ea0u: goto label_275ea0;
        case 0x275eb4u: goto label_275eb4;
        case 0x275ec8u: goto label_275ec8;
        case 0x275ed8u: goto label_275ed8;
        case 0x275ef0u: goto label_275ef0;
        case 0x275f3cu: goto label_275f3c;
        case 0x275f5cu: goto label_275f5c;
        default: break;
    }

    ctx->pc = 0x275e10u;

    // 0x275e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x275e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x275e14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275e18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x275e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x275e1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x275e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275e20: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x275E20u;
    SET_GPR_U32(ctx, 31, 0x275E28u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x275E20u, 0x275E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275E28u;
label_275e28:
    // 0x275e28: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x275e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x275e2c: 0x24635c90  addiu       $v1, $v1, 0x5C90
    ctx->pc = 0x275e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23696));
    // 0x275e30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x275e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275e34: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x275e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x275e38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x275e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275e40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x275e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x275e44: 0x3e00008  jr          $ra
    ctx->pc = 0x275E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275E4Cu;
    // 0x275e4c: 0x0  nop
    ctx->pc = 0x275e4cu;
    // NOP
    // 0x275e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x275e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x275e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275e58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x275e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x275e5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x275e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275e60: 0xc09d248  jal         func_274920
    ctx->pc = 0x275E60u;
    SET_GPR_U32(ctx, 31, 0x275E68u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x275E60u, 0x275E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275E68u;
label_275e68:
    // 0x275e68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x275e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x275e6c: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x275E6Cu;
    {
        const bool branch_taken_0x275e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x275e6c) {
            ctx->pc = 0x275EE0u;
            goto label_275ee0;
        }
    }
    ctx->pc = 0x275E74u;
    // 0x275e74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x275e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x275e78: 0x10430019  beq         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x275E78u;
    {
        const bool branch_taken_0x275e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x275e78) {
            ctx->pc = 0x275EE0u;
            goto label_275ee0;
        }
    }
    ctx->pc = 0x275E80u;
    // 0x275e80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x275e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275e84: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x275E84u;
    {
        const bool branch_taken_0x275e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x275e84) {
            ctx->pc = 0x275E94u;
            goto label_275e94;
        }
    }
    ctx->pc = 0x275E8Cu;
    // 0x275e8c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x275E8Cu;
    {
        const bool branch_taken_0x275e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275e8c) {
            ctx->pc = 0x275EF0u;
            goto label_275ef0;
        }
    }
    ctx->pc = 0x275E94u;
label_275e94:
    // 0x275e94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x275e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275e98: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x275E98u;
    SET_GPR_U32(ctx, 31, 0x275EA0u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x275E98u, 0x275EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275EA0u;
label_275ea0:
    // 0x275ea0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x275ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275ea4: 0x240504c0  addiu       $a1, $zero, 0x4C0
    ctx->pc = 0x275ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
    // 0x275ea8: 0x2786a1c0  addiu       $a2, $gp, -0x5E40
    ctx->pc = 0x275ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943168));
    // 0x275eac: 0xc041a50  jal         func_106940
    ctx->pc = 0x275EACu;
    SET_GPR_U32(ctx, 31, 0x275EB4u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x275EACu, 0x275EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275EB4u;
label_275eb4:
    // 0x275eb4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x275eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x275eb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x275eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275ebc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x275ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275ec0: 0xc08d4a4  jal         func_235290
    ctx->pc = 0x275EC0u;
    SET_GPR_U32(ctx, 31, 0x275EC8u);
    ctx->pc = 0x235290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235290u, 0x275EC0u, 0x275EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275EC8u;
label_275ec8:
    // 0x275ec8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x275ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275ecc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x275eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x275ed0: 0xc09d250  jal         func_274940
    ctx->pc = 0x275ED0u;
    SET_GPR_U32(ctx, 31, 0x275ED8u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x275ED0u, 0x275ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275ED8u;
label_275ed8:
    // 0x275ed8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x275ED8u;
    {
        const bool branch_taken_0x275ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275ed8) {
            ctx->pc = 0x275EF0u;
            goto label_275ef0;
        }
    }
    ctx->pc = 0x275EE0u;
label_275ee0:
    // 0x275ee0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x275ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275ee4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x275ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x275ee8: 0xc09d250  jal         func_274940
    ctx->pc = 0x275EE8u;
    SET_GPR_U32(ctx, 31, 0x275EF0u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x275EE8u, 0x275EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275EF0u;
label_275ef0:
    // 0x275ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275ef4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x275ef4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x275ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x275EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275F00u;
    // 0x275f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x275f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275f08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x275f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x275f0c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x275f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x275f10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x275f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275f14: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x275F14u;
    {
        const bool branch_taken_0x275f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275f14) {
            ctx->pc = 0x275F5Cu;
            goto label_275f5c;
        }
    }
    ctx->pc = 0x275F1Cu;
    // 0x275f1c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x275f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x275f20: 0x24635c90  addiu       $v1, $v1, 0x5C90
    ctx->pc = 0x275f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23696));
    // 0x275f24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x275f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275f28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x275f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x275f2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x275f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275f30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x275f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275f34: 0xc09d150  jal         func_274540
    ctx->pc = 0x275F34u;
    SET_GPR_U32(ctx, 31, 0x275F3Cu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x275F34u, 0x275F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275F3Cu;
label_275f3c:
    // 0x275f3c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x275f3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275f40: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x275f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x275f44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x275f44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x275f48: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275F48u;
    {
        const bool branch_taken_0x275f48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x275f48) {
            ctx->pc = 0x275F5Cu;
            goto label_275f5c;
        }
    }
    ctx->pc = 0x275F50u;
    // 0x275f50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x275f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275f54: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x275F54u;
    SET_GPR_U32(ctx, 31, 0x275F5Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x275F54u, 0x275F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275F5Cu;
label_275f5c:
    // 0x275f5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x275f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275f60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275f64: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x275f64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x275f68: 0x3e00008  jr          $ra
    ctx->pc = 0x275F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275F70u;
}

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

// Function: sub_0017BD80
// Address: 0x17bd80 - 0x17be80
void sub_0017BD80_0x17bd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BD80_0x17bd80");
#endif

    switch (ctx->pc) {
        case 0x17bde0u: goto label_17bde0;
        case 0x17bdf4u: goto label_17bdf4;
        case 0x17be08u: goto label_17be08;
        case 0x17be1cu: goto label_17be1c;
        case 0x17be30u: goto label_17be30;
        case 0x17be40u: goto label_17be40;
        case 0x17be60u: goto label_17be60;
        default: break;
    }

    ctx->pc = 0x17bd80u;

    // 0x17bd80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17bd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17bd84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x17bd84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x17bd88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x17bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bd8c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x17bd8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17bd90: 0x3e00008  jr          $ra
    ctx->pc = 0x17BD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BD90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BD98u;
    // 0x17bd98: 0x0  nop
    ctx->pc = 0x17bd98u;
    // NOP
    // 0x17bd9c: 0x0  nop
    ctx->pc = 0x17bd9cu;
    // NOP
    // 0x17bda0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17bda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17bda4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17bda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bda8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17bda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17bdac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x17bdacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x17bdb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bdb4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x17BDB4u;
    {
        const bool branch_taken_0x17bdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bdb4) {
            ctx->pc = 0x17BE60u;
            goto label_17be60;
        }
    }
    ctx->pc = 0x17BDBCu;
    // 0x17bdbc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x17bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x17bdc0: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x17bdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
    // 0x17bdc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bdc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17bdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17bdcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17bdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bdd0: 0x244400b4  addiu       $a0, $v0, 0xB4
    ctx->pc = 0x17bdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x17bdd4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17bdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17bdd8: 0xc056e54  jal         func_15B950
    ctx->pc = 0x17BDD8u;
    SET_GPR_U32(ctx, 31, 0x17BDE0u);
    ctx->pc = 0x15B950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B950u, 0x17BDD8u, 0x17BDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BDE0u;
label_17bde0:
    // 0x17bde0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bde4: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x17bde4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x17bde8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17bde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17bdec: 0xc05ed90  jal         func_17B640
    ctx->pc = 0x17BDECu;
    SET_GPR_U32(ctx, 31, 0x17BDF4u);
    ctx->pc = 0x17B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B640u, 0x17BDECu, 0x17BDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BDF4u;
label_17bdf4:
    // 0x17bdf4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bdf8: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x17bdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x17bdfc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17bdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17be00: 0xc05ee30  jal         func_17B8C0
    ctx->pc = 0x17BE00u;
    SET_GPR_U32(ctx, 31, 0x17BE08u);
    ctx->pc = 0x17B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B8C0u, 0x17BE00u, 0x17BE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BE08u;
label_17be08:
    // 0x17be08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17be08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17be0c: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x17be0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x17be10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17be10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17be14: 0xc056094  jal         func_158250
    ctx->pc = 0x17BE14u;
    SET_GPR_U32(ctx, 31, 0x17BE1Cu);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x17BE14u, 0x17BE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BE1Cu;
label_17be1c:
    // 0x17be1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17be20: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x17be20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x17be24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17be24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17be28: 0xc056094  jal         func_158250
    ctx->pc = 0x17BE28u;
    SET_GPR_U32(ctx, 31, 0x17BE30u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x17BE28u, 0x17BE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BE30u;
label_17be30:
    // 0x17be30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17be30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17be34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17be34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be38: 0xc055950  jal         func_156540
    ctx->pc = 0x17BE38u;
    SET_GPR_U32(ctx, 31, 0x17BE40u);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x17BE38u, 0x17BE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BE40u;
label_17be40:
    // 0x17be40: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x17be40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17be44: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x17be44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x17be48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17be48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x17be4c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BE4Cu;
    {
        const bool branch_taken_0x17be4c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x17be4c) {
            ctx->pc = 0x17BE60u;
            goto label_17be60;
        }
    }
    ctx->pc = 0x17BE54u;
    // 0x17be54: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17be54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17be58: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x17BE58u;
    SET_GPR_U32(ctx, 31, 0x17BE60u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x17BE58u, 0x17BE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BE60u;
label_17be60:
    // 0x17be60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17be60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17be64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17be64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17be68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17be68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17be6c: 0x3e00008  jr          $ra
    ctx->pc = 0x17BE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BE74u;
    // 0x17be74: 0x0  nop
    ctx->pc = 0x17be74u;
    // NOP
    // 0x17be78: 0x0  nop
    ctx->pc = 0x17be78u;
    // NOP
    // 0x17be7c: 0x0  nop
    ctx->pc = 0x17be7cu;
    // NOP
    ctx->pc = 0x17be80u;
}

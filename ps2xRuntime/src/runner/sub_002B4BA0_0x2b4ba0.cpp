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

// Function: sub_002B4BA0
// Address: 0x2b4ba0 - 0x2b4da0
void sub_002B4BA0_0x2b4ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4BA0_0x2b4ba0");
#endif

    switch (ctx->pc) {
        case 0x2b4be4u: goto label_2b4be4;
        case 0x2b4c24u: goto label_2b4c24;
        case 0x2b4c64u: goto label_2b4c64;
        case 0x2b4ca4u: goto label_2b4ca4;
        case 0x2b4cfcu: goto label_2b4cfc;
        case 0x2b4d4cu: goto label_2b4d4c;
        default: break;
    }

    ctx->pc = 0x2b4ba0u;

    // 0x2b4ba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b4ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b4ba4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2b4ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2b4ba8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2b4ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4bac: 0xc4400108  lwc1        $f0, 0x108($v0)
    ctx->pc = 0x2b4bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4bb0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b4bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b4bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4BBCu;
    // 0x2b4bbc: 0x0  nop
    ctx->pc = 0x2b4bbcu;
    // NOP
    // 0x2b4bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b4bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b4bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4bc8: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x2b4bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b4bcc: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x2b4bccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4bd0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2b4bd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b4bd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b4bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4bd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b4bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4bdc: 0xc0b0bd8  jal         func_2C2F60
    ctx->pc = 0x2B4BDCu;
    SET_GPR_U32(ctx, 31, 0x2B4BE4u);
    ctx->pc = 0x2C2F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F60u, 0x2B4BDCu, 0x2B4BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4BE4u;
label_2b4be4:
    // 0x2b4be4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4be8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b4be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b4bec: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4BF4u;
    // 0x2b4bf4: 0x0  nop
    ctx->pc = 0x2b4bf4u;
    // NOP
    // 0x2b4bf8: 0x0  nop
    ctx->pc = 0x2b4bf8u;
    // NOP
    // 0x2b4bfc: 0x0  nop
    ctx->pc = 0x2b4bfcu;
    // NOP
    // 0x2b4c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b4c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b4c04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4c08: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x2b4c08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b4c0c: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x2b4c0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4c10: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2b4c10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b4c14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b4c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b4c18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c1c: 0xc0b0b54  jal         func_2C2D50
    ctx->pc = 0x2B4C1Cu;
    SET_GPR_U32(ctx, 31, 0x2B4C24u);
    ctx->pc = 0x2C2D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2D50u, 0x2B4C1Cu, 0x2B4C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4C24u;
label_2b4c24:
    // 0x2b4c24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4c28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b4c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b4c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4C34u;
    // 0x2b4c34: 0x0  nop
    ctx->pc = 0x2b4c34u;
    // NOP
    // 0x2b4c38: 0x0  nop
    ctx->pc = 0x2b4c38u;
    // NOP
    // 0x2b4c3c: 0x0  nop
    ctx->pc = 0x2b4c3cu;
    // NOP
    // 0x2b4c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b4c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b4c44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4c48: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x2b4c48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b4c4c: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x2b4c4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4c50: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2b4c50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b4c54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b4c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b4c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c5c: 0xc0b0b18  jal         func_2C2C60
    ctx->pc = 0x2B4C5Cu;
    SET_GPR_U32(ctx, 31, 0x2B4C64u);
    ctx->pc = 0x2C2C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2C60u, 0x2B4C5Cu, 0x2B4C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4C64u;
label_2b4c64:
    // 0x2b4c64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4c68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b4c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b4c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4C74u;
    // 0x2b4c74: 0x0  nop
    ctx->pc = 0x2b4c74u;
    // NOP
    // 0x2b4c78: 0x0  nop
    ctx->pc = 0x2b4c78u;
    // NOP
    // 0x2b4c7c: 0x0  nop
    ctx->pc = 0x2b4c7cu;
    // NOP
    // 0x2b4c80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b4c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b4c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4c88: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x2b4c88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b4c8c: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x2b4c8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4c90: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2b4c90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b4c94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b4c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b4c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c9c: 0xc0b0ba0  jal         func_2C2E80
    ctx->pc = 0x2B4C9Cu;
    SET_GPR_U32(ctx, 31, 0x2B4CA4u);
    ctx->pc = 0x2C2E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2E80u, 0x2B4C9Cu, 0x2B4CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4CA4u;
label_2b4ca4:
    // 0x2b4ca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4ca8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b4ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b4cac: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4CB4u;
    // 0x2b4cb4: 0x0  nop
    ctx->pc = 0x2b4cb4u;
    // NOP
    // 0x2b4cb8: 0x0  nop
    ctx->pc = 0x2b4cb8u;
    // NOP
    // 0x2b4cbc: 0x0  nop
    ctx->pc = 0x2b4cbcu;
    // NOP
    // 0x2b4cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b4cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b4cc4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b4cc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b4cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4CD0u;
    // 0x2b4cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b4cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b4cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4cd8: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x2b4cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b4cdc: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x2b4cdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4ce0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B4CE0u;
    {
        const bool branch_taken_0x2b4ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4ce0) {
            ctx->pc = 0x2B4CFCu;
            goto label_2b4cfc;
        }
    }
    ctx->pc = 0x2B4CE8u;
    // 0x2b4ce8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b4ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4cec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b4cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4cf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b4cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4cf4: 0xc0b0cd0  jal         func_2C3340
    ctx->pc = 0x2B4CF4u;
    SET_GPR_U32(ctx, 31, 0x2B4CFCu);
    ctx->pc = 0x2C3340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3340u, 0x2B4CF4u, 0x2B4CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4CFCu;
label_2b4cfc:
    // 0x2b4cfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4d00: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b4d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b4d04: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4D0Cu;
    // 0x2b4d0c: 0x0  nop
    ctx->pc = 0x2b4d0cu;
    // NOP
    // 0x2b4d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b4d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b4d14: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b4d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b4d18: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4D20u;
    // 0x2b4d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b4d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b4d24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4d28: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x2b4d28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b4d2c: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x2b4d2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4d30: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B4D30u;
    {
        const bool branch_taken_0x2b4d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4d30) {
            ctx->pc = 0x2B4D4Cu;
            goto label_2b4d4c;
        }
    }
    ctx->pc = 0x2B4D38u;
    // 0x2b4d38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b4d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4d3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b4d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4d40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b4d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4d44: 0xc0b0ce8  jal         func_2C33A0
    ctx->pc = 0x2B4D44u;
    SET_GPR_U32(ctx, 31, 0x2B4D4Cu);
    ctx->pc = 0x2C33A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C33A0u, 0x2B4D44u, 0x2B4D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4D4Cu;
label_2b4d4c:
    // 0x2b4d4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4d50: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b4d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b4d54: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4D5Cu;
    // 0x2b4d5c: 0x0  nop
    ctx->pc = 0x2b4d5cu;
    // NOP
    // 0x2b4d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b4d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b4d64: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b4d64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b4d68: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4D70u;
    // 0x2b4d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b4d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b4d74: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b4d74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b4d78: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4D80u;
    // 0x2b4d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b4d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b4d84: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b4d84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b4d88: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4D90u;
    // 0x2b4d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b4d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b4d94: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b4d94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b4d98: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4DA0u;
}

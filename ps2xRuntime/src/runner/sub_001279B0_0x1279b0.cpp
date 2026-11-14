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

// Function: sub_001279B0
// Address: 0x1279b0 - 0x127a40
void sub_001279B0_0x1279b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001279B0_0x1279b0");
#endif

    switch (ctx->pc) {
        case 0x1279c8u: goto label_1279c8;
        default: break;
    }

    ctx->pc = 0x1279b0u;

    // 0x1279b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1279b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1279b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1279b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1279b8: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1279b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x1279bc: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x1279bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x1279c0: 0xc117bd0  jal         func_45EF40
    ctx->pc = 0x1279C0u;
    SET_GPR_U32(ctx, 31, 0x1279C8u);
    ctx->pc = 0x45EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45EF40u, 0x1279C0u, 0x1279C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1279C8u;
label_1279c8:
    // 0x1279c8: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x1279c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1279cc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1279CCu;
    {
        const bool branch_taken_0x1279cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1279cc) {
            ctx->pc = 0x1279F8u;
            goto label_1279f8;
        }
    }
    ctx->pc = 0x1279D4u;
    // 0x1279d4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1279d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1279d8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1279d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1279dc: 0xac64b490  sw          $a0, -0x4B70($v1)
    ctx->pc = 0x1279dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60B490u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60B490u, _value); } while (0);
    // 0x1279e0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1279e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1279e4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1279e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1279e8: 0xac64b498  sw          $a0, -0x4B68($v1)
    ctx->pc = 0x1279e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60B498u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60B498u, _value); } while (0);
    // 0x1279ec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1279ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1279f0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1279f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1279f4: 0xac64b494  sw          $a0, -0x4B6C($v1)
    ctx->pc = 0x1279f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60B494u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60B494u, _value); } while (0);
label_1279f8:
    // 0x1279f8: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x1279f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1279fc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1279FCu;
    {
        const bool branch_taken_0x1279fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1279fc) {
            ctx->pc = 0x127A28u;
            goto label_127a28;
        }
    }
    ctx->pc = 0x127A04u;
    // 0x127a04: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x127a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127a08: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x127a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x127a0c: 0xac64b49c  sw          $a0, -0x4B64($v1)
    ctx->pc = 0x127a0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60B49Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60B49Cu, _value); } while (0);
    // 0x127a10: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x127a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127a14: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x127a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x127a18: 0xac64b4a4  sw          $a0, -0x4B5C($v1)
    ctx->pc = 0x127a18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60B4A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60B4A4u, _value); } while (0);
    // 0x127a1c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x127a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127a20: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x127a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x127a24: 0xac64b4a0  sw          $a0, -0x4B60($v1)
    ctx->pc = 0x127a24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60B4A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60B4A0u, _value); } while (0);
label_127a28:
    // 0x127a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x127a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127a2c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x127a2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x127a30: 0x3e00008  jr          $ra
    ctx->pc = 0x127A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127A38u;
    // 0x127a38: 0x0  nop
    ctx->pc = 0x127a38u;
    // NOP
    // 0x127a3c: 0x0  nop
    ctx->pc = 0x127a3cu;
    // NOP
    ctx->pc = 0x127a40u;
}

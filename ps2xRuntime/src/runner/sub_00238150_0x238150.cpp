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

// Function: sub_00238150
// Address: 0x238150 - 0x238250
void sub_00238150_0x238150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238150_0x238150");
#endif

    switch (ctx->pc) {
        case 0x238178u: goto label_238178;
        case 0x23818cu: goto label_23818c;
        case 0x2381a4u: goto label_2381a4;
        case 0x238200u: goto label_238200;
        case 0x23821cu: goto label_23821c;
        default: break;
    }

    ctx->pc = 0x238150u;

    // 0x238150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x238154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238158: 0xa3a40010  sb          $a0, 0x10($sp)
    ctx->pc = 0x238158u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x23815c: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x23815cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238160: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x238160u;
    {
        const bool branch_taken_0x238160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238160) {
            ctx->pc = 0x2381E8u;
            goto label_2381e8;
        }
    }
    ctx->pc = 0x238168u;
    // 0x238168: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x238168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x23816c: 0x2484baf0  addiu       $a0, $a0, -0x4510
    ctx->pc = 0x23816cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949616));
    // 0x238170: 0xc107156  jal         func_41C558
    ctx->pc = 0x238170u;
    SET_GPR_U32(ctx, 31, 0x238178u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x238170u, 0x238178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238178u;
label_238178:
    // 0x238178: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x238178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x23817c: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x23817cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
    // 0x238180: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x238180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238184: 0xc107fa4  jal         func_41FE90
    ctx->pc = 0x238184u;
    SET_GPR_U32(ctx, 31, 0x23818Cu);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x238184u, 0x23818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23818Cu;
label_23818c:
    // 0x23818c: 0xaf82bbb8  sw          $v0, -0x4448($gp)
    ctx->pc = 0x23818cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949816), GPR_U32(ctx, 2));
    // 0x238190: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x238190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x238194: 0x2484bb20  addiu       $a0, $a0, -0x44E0
    ctx->pc = 0x238194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949664));
    // 0x238198: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x238198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23819c: 0xc107fa4  jal         func_41FE90
    ctx->pc = 0x23819Cu;
    SET_GPR_U32(ctx, 31, 0x2381A4u);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x23819Cu, 0x2381A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2381A4u;
label_2381a4:
    // 0x2381a4: 0xaf82bbbc  sw          $v0, -0x4444($gp)
    ctx->pc = 0x2381a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949820), GPR_U32(ctx, 2));
    // 0x2381a8: 0x8f82bbb8  lw          $v0, -0x4448($gp)
    ctx->pc = 0x2381a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949816)));
    // 0x2381ac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2381ACu;
    {
        const bool branch_taken_0x2381ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2381ac) {
            ctx->pc = 0x2381D8u;
            goto label_2381d8;
        }
    }
    ctx->pc = 0x2381B4u;
    // 0x2381b4: 0x8f82bbbc  lw          $v0, -0x4444($gp)
    ctx->pc = 0x2381b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949820)));
    // 0x2381b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2381B8u;
    {
        const bool branch_taken_0x2381b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2381b8) {
            ctx->pc = 0x2381D8u;
            goto label_2381d8;
        }
    }
    ctx->pc = 0x2381C0u;
    // 0x2381c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2381c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2381c4: 0xa382bbc0  sb          $v0, -0x4440($gp)
    ctx->pc = 0x2381c4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949824), (uint8_t)GPR_U32(ctx, 2));
    // 0x2381c8: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x2381c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x2381cc: 0x24638260  addiu       $v1, $v1, -0x7DA0
    ctx->pc = 0x2381ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935136));
    // 0x2381d0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2381d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2381d4: 0xac4343d8  sw          $v1, 0x43D8($v0)
    ctx->pc = 0x2381d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6243D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6243D8u, _value); } while (0);
label_2381d8:
    // 0x2381d8: 0x9382bbc0  lbu         $v0, -0x4440($gp)
    ctx->pc = 0x2381d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949824)));
    // 0x2381dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2381dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2381e0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2381E0u;
    {
        const bool branch_taken_0x2381e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2381e0) {
            ctx->pc = 0x238234u;
            goto label_238234;
        }
    }
    ctx->pc = 0x2381E8u;
label_2381e8:
    // 0x2381e8: 0x8f82bbb8  lw          $v0, -0x4448($gp)
    ctx->pc = 0x2381e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949816)));
    // 0x2381ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2381ECu;
    {
        const bool branch_taken_0x2381ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2381ec) {
            ctx->pc = 0x238204u;
            goto label_238204;
        }
    }
    ctx->pc = 0x2381F4u;
    // 0x2381f4: 0x8f84bbb8  lw          $a0, -0x4448($gp)
    ctx->pc = 0x2381f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949816)));
    // 0x2381f8: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x2381F8u;
    SET_GPR_U32(ctx, 31, 0x238200u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x2381F8u, 0x238200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238200u;
label_238200:
    // 0x238200: 0xaf80bbb8  sw          $zero, -0x4448($gp)
    ctx->pc = 0x238200u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949816), GPR_U32(ctx, 0));
label_238204:
    // 0x238204: 0x8f82bbbc  lw          $v0, -0x4444($gp)
    ctx->pc = 0x238204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949820)));
    // 0x238208: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238208u;
    {
        const bool branch_taken_0x238208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238208) {
            ctx->pc = 0x238220u;
            goto label_238220;
        }
    }
    ctx->pc = 0x238210u;
    // 0x238210: 0x8f84bbbc  lw          $a0, -0x4444($gp)
    ctx->pc = 0x238210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949820)));
    // 0x238214: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x238214u;
    SET_GPR_U32(ctx, 31, 0x23821Cu);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x238214u, 0x23821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23821Cu;
label_23821c:
    // 0x23821c: 0xaf80bbbc  sw          $zero, -0x4444($gp)
    ctx->pc = 0x23821cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949820), GPR_U32(ctx, 0));
label_238220:
    // 0x238220: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x238220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x238224: 0xac4043d8  sw          $zero, 0x43D8($v0)
    ctx->pc = 0x238224u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6243D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6243D8u, _value); } while (0);
    // 0x238228: 0xa380bbc0  sb          $zero, -0x4440($gp)
    ctx->pc = 0x238228u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949824), (uint8_t)GPR_U32(ctx, 0));
    // 0x23822c: 0x9382bbc0  lbu         $v0, -0x4440($gp)
    ctx->pc = 0x23822cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949824)));
    // 0x238230: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x238230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_238234:
    // 0x238234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238238: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x238238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23823c: 0x3e00008  jr          $ra
    ctx->pc = 0x23823Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23823Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238244u;
    // 0x238244: 0x0  nop
    ctx->pc = 0x238244u;
    // NOP
    // 0x238248: 0x0  nop
    ctx->pc = 0x238248u;
    // NOP
    // 0x23824c: 0x0  nop
    ctx->pc = 0x23824cu;
    // NOP
    ctx->pc = 0x238250u;
}

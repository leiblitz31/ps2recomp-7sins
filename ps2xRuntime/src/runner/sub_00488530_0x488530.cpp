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

// Function: sub_00488530
// Address: 0x488530 - 0x4885f0
void sub_00488530_0x488530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488530_0x488530");
#endif

    switch (ctx->pc) {
        case 0x488544u: goto label_488544;
        case 0x488558u: goto label_488558;
        case 0x488564u: goto label_488564;
        case 0x488578u: goto label_488578;
        case 0x4885c8u: goto label_4885c8;
        case 0x4885d8u: goto label_4885d8;
        default: break;
    }

    ctx->pc = 0x488530u;

    // 0x488530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x488530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x488534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x488534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x488538: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x488538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48853c: 0xc0ef228  jal         func_3BC8A0
    ctx->pc = 0x48853Cu;
    SET_GPR_U32(ctx, 31, 0x488544u);
    ctx->pc = 0x3BC8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC8A0u, 0x48853Cu, 0x488544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488544u;
label_488544:
    // 0x488544: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x488544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x488548: 0x24847bc0  addiu       $a0, $a0, 0x7BC0
    ctx->pc = 0x488548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31680));
    // 0x48854c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48854cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488550: 0xc12217c  jal         func_4885F0
    ctx->pc = 0x488550u;
    SET_GPR_U32(ctx, 31, 0x488558u);
    ctx->pc = 0x4885F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4885F0u, 0x488550u, 0x488558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488558u;
label_488558:
    // 0x488558: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x488558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48855c: 0xc0ef228  jal         func_3BC8A0
    ctx->pc = 0x48855Cu;
    SET_GPR_U32(ctx, 31, 0x488564u);
    ctx->pc = 0x3BC8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC8A0u, 0x48855Cu, 0x488564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488564u;
label_488564:
    // 0x488564: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x488564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x488568: 0x24847bf0  addiu       $a0, $a0, 0x7BF0
    ctx->pc = 0x488568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31728));
    // 0x48856c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48856cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488570: 0xc12217c  jal         func_4885F0
    ctx->pc = 0x488570u;
    SET_GPR_U32(ctx, 31, 0x488578u);
    ctx->pc = 0x4885F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4885F0u, 0x488570u, 0x488578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488578u;
label_488578:
    // 0x488578: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x488578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x48857c: 0x8c427bc0  lw          $v0, 0x7BC0($v0)
    ctx->pc = 0x48857cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x657BC0u));
    // 0x488580: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x488580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x488584: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x488584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x488588: 0xac437bc0  sw          $v1, 0x7BC0($v0)
    ctx->pc = 0x488588u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x657BC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x657BC0u, _value); } while (0);
    // 0x48858c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x48858cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x488590: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x488590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x488594: 0xac437bc4  sw          $v1, 0x7BC4($v0)
    ctx->pc = 0x488594u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x657BC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x657BC4u, _value); } while (0);
    // 0x488598: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x488598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x48859c: 0x8c427bf0  lw          $v0, 0x7BF0($v0)
    ctx->pc = 0x48859cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x657BF0u));
    // 0x4885a0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x4885a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4885a4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4885a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x4885a8: 0xac437bf0  sw          $v1, 0x7BF0($v0)
    ctx->pc = 0x4885a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x657BF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x657BF0u, _value); } while (0);
    // 0x4885ac: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x4885acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x4885b0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4885b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x4885b4: 0xac437bf4  sw          $v1, 0x7BF4($v0)
    ctx->pc = 0x4885b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x657BF4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x657BF4u, _value); } while (0);
    // 0x4885b8: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x4885b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x4885bc: 0x24847bc0  addiu       $a0, $a0, 0x7BC0
    ctx->pc = 0x4885bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31680));
    // 0x4885c0: 0xc0ef19a  jal         func_3BC668
    ctx->pc = 0x4885C0u;
    SET_GPR_U32(ctx, 31, 0x4885C8u);
    ctx->pc = 0x3BC668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC668u, 0x4885C0u, 0x4885C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4885C8u;
label_4885c8:
    // 0x4885c8: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x4885c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x4885cc: 0x24847bf0  addiu       $a0, $a0, 0x7BF0
    ctx->pc = 0x4885ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31728));
    // 0x4885d0: 0xc0ef19a  jal         func_3BC668
    ctx->pc = 0x4885D0u;
    SET_GPR_U32(ctx, 31, 0x4885D8u);
    ctx->pc = 0x3BC668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC668u, 0x4885D0u, 0x4885D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4885D8u;
label_4885d8:
    // 0x4885d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4885d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4885dc: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4885dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4885e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4885E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4885E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4885E8u;
    // 0x4885e8: 0x0  nop
    ctx->pc = 0x4885e8u;
    // NOP
    // 0x4885ec: 0x0  nop
    ctx->pc = 0x4885ecu;
    // NOP
    ctx->pc = 0x4885f0u;
}

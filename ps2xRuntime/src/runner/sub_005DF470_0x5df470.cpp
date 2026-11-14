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

// Function: sub_005DF470
// Address: 0x5df470 - 0x5df490
void sub_005DF470_0x5df470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF470_0x5df470");
#endif

    switch (ctx->pc) {
        case 0x5df488u: goto label_5df488;
        default: break;
    }

    ctx->pc = 0x5df470u;

    // 0x5df470: 0x2e637273  sltiu       $v1, $s3, 0x7273
    ctx->pc = 0x5df470u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29299) ? 1 : 0);
    // 0x5df474: 0x74735f63  .word       0x74735F63                   # INVALID     $v1, $s3, 0x5F63 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df474u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DF474 raw=0x74735F63");
    // 0x5df478: 0x20292872  addi        $t1, $at, 0x2872
    ctx->pc = 0x5df478u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)10354, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x5df47c: 0x30203d21  andi        $zero, $at, 0x3D21
    ctx->pc = 0x5df47cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)15649);
    // 0x5df480: 0x0  nop
    ctx->pc = 0x5df480u;
    // NOP
    // 0x5df484: 0x0  nop
    ctx->pc = 0x5df484u;
    // NOP
label_5df488:
    // 0x5df488: 0x0  nop
    ctx->pc = 0x5df488u;
    // NOP
    // 0x5df48c: 0x0  nop
    ctx->pc = 0x5df48cu;
    // NOP
    ctx->pc = 0x5df490u;
}

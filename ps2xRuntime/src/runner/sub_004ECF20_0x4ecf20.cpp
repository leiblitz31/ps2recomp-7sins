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

// Function: sub_004ECF20
// Address: 0x4ecf20 - 0x4ecf40
void sub_004ECF20_0x4ecf20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECF20_0x4ecf20");
#endif

    switch (ctx->pc) {
        case 0x4ecf28u: goto label_4ecf28;
        default: break;
    }

    ctx->pc = 0x4ecf20u;

    // 0x4ecf20: 0x34333231  ori         $s3, $at, 0x3231
    ctx->pc = 0x4ecf20u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12849);
    // 0x4ecf24: 0x38373635  xori        $s7, $at, 0x3635
    ctx->pc = 0x4ecf24u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)13877);
label_4ecf28:
    // 0x4ecf28: 0x32313039  andi        $s1, $s1, 0x3039
    ctx->pc = 0x4ecf28u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)12345);
    // 0x4ecf2c: 0x36353433  ori         $s5, $s1, 0x3433
    ctx->pc = 0x4ecf2cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)13363);
    // 0x4ecf30: 0x30393837  andi        $t9, $at, 0x3837
    ctx->pc = 0x4ecf30u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)14391);
    // 0x4ecf34: 0x34333231  ori         $s3, $at, 0x3231
    ctx->pc = 0x4ecf34u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12849);
    // 0x4ecf38: 0x38373635  xori        $s7, $at, 0x3635
    ctx->pc = 0x4ecf38u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)13877);
    // 0x4ecf3c: 0x3039  .word       0x00003039                   # INVALID     $zero, $zero, 0x3039 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecf3cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x4ECF3C raw=0x00003039");
    ctx->pc = 0x4ecf40u;
}

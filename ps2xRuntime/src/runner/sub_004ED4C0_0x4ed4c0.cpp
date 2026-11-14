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

// Function: sub_004ED4C0
// Address: 0x4ed4c0 - 0x4ed510
void sub_004ED4C0_0x4ed4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED4C0_0x4ed4c0");
#endif

    ctx->pc = 0x4ed4c0u;

    // 0x4ed4c0: 0x0  nop
    ctx->pc = 0x4ed4c0u;
    // NOP
    // 0x4ed4c4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed4c4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4ed4c8: 0x0  nop
    ctx->pc = 0x4ed4c8u;
    // NOP
    // 0x4ed4cc: 0x0  nop
    ctx->pc = 0x4ed4ccu;
    // NOP
    // 0x4ed4d0: 0x0  nop
    ctx->pc = 0x4ed4d0u;
    // NOP
    // 0x4ed4d4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed4d4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4ed4d8: 0x0  nop
    ctx->pc = 0x4ed4d8u;
    // NOP
    // 0x4ed4dc: 0x0  nop
    ctx->pc = 0x4ed4dcu;
    // NOP
    // 0x4ed4e0: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x4ed4e0u;
    
    // 0x4ed4e4: 0x20001  .word       0x00020001                   # INVALID     $zero, $v0, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed4e4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4ED4E4 raw=0x00020001");
    // 0x4ed4e8: 0x30002  srl         $zero, $v1, 0
    ctx->pc = 0x4ed4e8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 3), 0));
    // 0x4ed4ec: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x4ed4ecu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
    // 0x4ed4f0: 0x50004  sllv        $zero, $a1, $zero
    ctx->pc = 0x4ed4f0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 0) & 0x1F));
    // 0x4ed4f4: 0x60005  .word       0x00060005                   # INVALID     $zero, $a2, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed4f4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4ED4F4 raw=0x00060005");
    // 0x4ed4f8: 0x70006  srlv        $zero, $a3, $zero
    ctx->pc = 0x4ed4f8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 0) & 0x1F));
    // 0x4ed4fc: 0x40007  srav        $zero, $a0, $zero
    ctx->pc = 0x4ed4fcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 0) & 0x1F));
    // 0x4ed500: 0x40000  sll         $zero, $a0, 0
    ctx->pc = 0x4ed500u;
    
    // 0x4ed504: 0x50001  .word       0x00050001                   # INVALID     $zero, $a1, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed504u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4ED504 raw=0x00050001");
    // 0x4ed508: 0x60002  srl         $zero, $a2, 0
    ctx->pc = 0x4ed508u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 6), 0));
    // 0x4ed50c: 0x70003  sra         $zero, $a3, 0
    ctx->pc = 0x4ed50cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 7), 0));
    ctx->pc = 0x4ed510u;
}

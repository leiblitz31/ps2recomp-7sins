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

// Function: sub_0045B2B0
// Address: 0x45b2b0 - 0x45b510
void sub_0045B2B0_0x45b2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045B2B0_0x45b2b0");
#endif

    switch (ctx->pc) {
        case 0x45b420u: goto label_45b420;
        case 0x45b45cu: goto label_45b45c;
        default: break;
    }

    ctx->pc = 0x45b2b0u;

    // 0x45b2b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x45b2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x45b2b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45b2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x45b2b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x45b2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45b2bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x45b2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x45b2c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x45b2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45b2c4: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x45b2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x45b2c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b2cc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x45b2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x45b2d0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45b2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x45b2d4: 0x24634920  addiu       $v1, $v1, 0x4920
    ctx->pc = 0x45b2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18720));
    // 0x45b2d8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x45b2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b2dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x45b2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45b2e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x45b2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x45b2e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45b2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b2e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x45b2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x45b2ec: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x45B2ECu;
    {
        const bool branch_taken_0x45b2ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b2ec) {
            ctx->pc = 0x45B354u;
            goto label_45b354;
        }
    }
    ctx->pc = 0x45B2F4u;
    // 0x45b2f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x45b2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45b2f8: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x45b2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x45b2fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45b2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b300: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x45b300u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x45b304: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45b304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x45b308: 0x246343e0  addiu       $v1, $v1, 0x43E0
    ctx->pc = 0x45b308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17376));
    // 0x45b30c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x45b30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b310: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x45b310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45b314: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x45b314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x45b318: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45b318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b31c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x45b31cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x45b320: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x45b320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45b324: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x45b324u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x45b328: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45b328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b32c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x45b32cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x45b330: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45b330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x45b334: 0x24634700  addiu       $v1, $v1, 0x4700
    ctx->pc = 0x45b334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18176));
    // 0x45b338: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x45b338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b33c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x45b33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45b340: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x45b340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x45b344: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45b344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b348: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x45b348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x45b34c: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x45B34Cu;
    {
        const bool branch_taken_0x45b34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b34c) {
            ctx->pc = 0x45B4F4u;
            goto label_45b4f4;
        }
    }
    ctx->pc = 0x45B354u;
label_45b354:
    // 0x45b354: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x45b354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45b358: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x45b358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x45b35c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b360: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x45b360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x45b364: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45b364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x45b368: 0x24634920  addiu       $v1, $v1, 0x4920
    ctx->pc = 0x45b368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18720));
    // 0x45b36c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x45b36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b370: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x45b370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45b374: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x45b374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x45b378: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45b378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b37c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x45b37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x45b380: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x45b380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45b384: 0x1483005b  bne         $a0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x45B384u;
    {
        const bool branch_taken_0x45b384 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x45b384) {
            ctx->pc = 0x45B4F4u;
            goto label_45b4f4;
        }
    }
    ctx->pc = 0x45B38Cu;
    // 0x45b38c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x45b38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45b390: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x45b390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x45b394: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45b394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45b398: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45b398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x45b39c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x45b3a0: 0x24424810  addiu       $v0, $v0, 0x4810
    ctx->pc = 0x45b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18448));
    // 0x45b3a4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x45b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45b3a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x45b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45b3ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45b3acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x45b3b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45b3b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45b3b8: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x45B3B8u;
    {
        const bool branch_taken_0x45b3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b3b8) {
            ctx->pc = 0x45B454u;
            goto label_45b454;
        }
    }
    ctx->pc = 0x45B3C0u;
    // 0x45b3c0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x45b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45b3c4: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x45b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x45b3c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45b3cc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45b3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x45b3d0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45b3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x45b3d4: 0x244243e0  addiu       $v0, $v0, 0x43E0
    ctx->pc = 0x45b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17376));
    // 0x45b3d8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x45b3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45b3dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x45b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45b3e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x45b3e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45b3e8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x45b3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x45b3ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x45b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45b3f0: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x45b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x45b3f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45b3f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x45b3fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x45b400: 0x24424700  addiu       $v0, $v0, 0x4700
    ctx->pc = 0x45b400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18176));
    // 0x45b404: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x45b404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45b408: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x45b408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45b40c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x45b410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45b410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45b414: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x45b414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x45b418: 0xc11904c  jal         func_464130
    ctx->pc = 0x45B418u;
    SET_GPR_U32(ctx, 31, 0x45B420u);
    ctx->pc = 0x464130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464130u, 0x45B418u, 0x45B420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45B420u;
label_45b420:
    // 0x45b420: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x45b420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45b424: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x45b424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x45b428: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45b428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b42c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x45b42cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x45b430: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45b430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x45b434: 0x246344f0  addiu       $v1, $v1, 0x44F0
    ctx->pc = 0x45b434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17648));
    // 0x45b438: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x45b438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b43c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x45b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45b440: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x45b440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x45b444: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45b444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b448: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x45b448u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x45b44c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x45B44Cu;
    {
        const bool branch_taken_0x45b44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b44c) {
            ctx->pc = 0x45B4F4u;
            goto label_45b4f4;
        }
    }
    ctx->pc = 0x45B454u;
label_45b454:
    // 0x45b454: 0xc11904c  jal         func_464130
    ctx->pc = 0x45B454u;
    SET_GPR_U32(ctx, 31, 0x45B45Cu);
    ctx->pc = 0x464130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464130u, 0x45B454u, 0x45B45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45B45Cu;
label_45b45c:
    // 0x45b45c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x45b45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45b460: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x45b460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x45b464: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45b464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b468: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x45b468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x45b46c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45b46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x45b470: 0x246344f0  addiu       $v1, $v1, 0x44F0
    ctx->pc = 0x45b470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17648));
    // 0x45b474: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x45b474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b478: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x45b478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45b47c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x45b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x45b480: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45b480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b484: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x45b484u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x45b488: 0x43182f  dsubu       $v1, $v0, $v1
    ctx->pc = 0x45b488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x45b48c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x45b48cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x45b490: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x45b490u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x45b494: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x45b494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45b498: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x45b498u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x45b49c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45b49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b4a0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x45b4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x45b4a4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45b4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x45b4a8: 0x246343e0  addiu       $v1, $v1, 0x43E0
    ctx->pc = 0x45b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17376));
    // 0x45b4ac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x45b4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b4b0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x45b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45b4b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x45b4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x45b4b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b4bc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x45b4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x45b4c0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x45b4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45b4c4: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x45b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x45b4c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b4cc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x45b4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x45b4d0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x45b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x45b4d4: 0x24634700  addiu       $v1, $v1, 0x4700
    ctx->pc = 0x45b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18176));
    // 0x45b4d8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x45b4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b4dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x45b4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45b4e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x45b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x45b4e4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x45b4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x45b4e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x45b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45b4ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x45b4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x45b4f0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x45b4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_45b4f4:
    // 0x45b4f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45b4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45b4f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x45b4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x45b4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x45B4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45B4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45B504u;
    // 0x45b504: 0x0  nop
    ctx->pc = 0x45b504u;
    // NOP
    // 0x45b508: 0x0  nop
    ctx->pc = 0x45b508u;
    // NOP
    // 0x45b50c: 0x0  nop
    ctx->pc = 0x45b50cu;
    // NOP
    ctx->pc = 0x45b510u;
}

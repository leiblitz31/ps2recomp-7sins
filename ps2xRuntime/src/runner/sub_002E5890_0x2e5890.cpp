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

// Function: sub_002E5890
// Address: 0x2e5890 - 0x2e59e0
void sub_002E5890_0x2e5890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5890_0x2e5890");
#endif

    switch (ctx->pc) {
        case 0x2e58c4u: goto label_2e58c4;
        case 0x2e58d0u: goto label_2e58d0;
        case 0x2e5980u: goto label_2e5980;
        default: break;
    }

    ctx->pc = 0x2e5890u;

    // 0x2e5890: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e5890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e5894: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e5894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e5898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e5898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e589c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e589cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e58a0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2e58a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2e58a4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2e58a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2e58a8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2e58a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2e58ac: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e58acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e58b0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2e58b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e58b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e58b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e58b8: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2e58b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e58bc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2E58BCu;
    {
        const bool branch_taken_0x2e58bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e58bc) {
            ctx->pc = 0x2E5998u;
            goto label_2e5998;
        }
    }
    ctx->pc = 0x2E58C4u;
label_2e58c4:
    // 0x2e58c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e58c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e58c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E58C8u;
    {
        const bool branch_taken_0x2e58c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e58c8) {
            ctx->pc = 0x2E58E8u;
            goto label_2e58e8;
        }
    }
    ctx->pc = 0x2E58D0u;
label_2e58d0:
    // 0x2e58d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e58d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e58d4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e58d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e58d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e58d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e58dc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2e58dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e58e0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e58e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e58e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2e58e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2e58e8:
    // 0x2e58e8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e58e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e58ec: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2e58ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e58f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e58f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e58f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e58f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e58f8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2e58f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e58fc: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x2e58fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2e5900: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2e5900u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2e5904: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2e5904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2e5908: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E5908u;
    {
        const bool branch_taken_0x2e5908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e5908) {
            ctx->pc = 0x2E5934u;
            goto label_2e5934;
        }
    }
    ctx->pc = 0x2E5910u;
    // 0x2e5910: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e5910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e5914: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2e5914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e5918: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e5918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e591c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e591cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e5920: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2e5920u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e5924: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2e5924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2e5928: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2e5928u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2e592c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2E592Cu;
    {
        const bool branch_taken_0x2e592c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e592c) {
            ctx->pc = 0x2E58D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e58d0;
        }
    }
    ctx->pc = 0x2E5934u;
label_2e5934:
    // 0x2e5934: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e5934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e5938: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2e5938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e593c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e593cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e5940: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e5940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e5944: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2e5944u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e5948: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2e5948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2e594c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2e594cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2e5950: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E5950u;
    {
        const bool branch_taken_0x2e5950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5950) {
            ctx->pc = 0x2E596Cu;
            goto label_2e596c;
        }
    }
    ctx->pc = 0x2E5958u;
    // 0x2e5958: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e5958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e595c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e595cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e5960: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x2e5960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2e5964: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e5964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e5968: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2e5968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2e596c:
    // 0x2e596c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2e596cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5970: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e5970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5974: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e5974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5978: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x2E5978u;
    SET_GPR_U32(ctx, 31, 0x2E5980u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x2E5978u, 0x2E5980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5980u;
label_2e5980:
    // 0x2e5980: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e5980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5984: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2e5984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2e5988: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2e5988u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e598c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e598cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5990: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E5990u;
    {
        const bool branch_taken_0x2e5990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5990) {
            ctx->pc = 0x2E59C0u;
            goto label_2e59c0;
        }
    }
    ctx->pc = 0x2E5998u;
label_2e5998:
    // 0x2e5998: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e5998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e599c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2e599cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e59a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e59a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e59a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e59a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e59a8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2e59a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e59ac: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2e59acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2e59b0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2e59b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2e59b4: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x2E59B4u;
    {
        const bool branch_taken_0x2e59b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e59b4) {
            ctx->pc = 0x2E58C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e58c4;
        }
    }
    ctx->pc = 0x2E59BCu;
    // 0x2e59bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e59bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e59c0:
    // 0x2e59c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e59c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e59c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e59c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e59c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e59c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e59cc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2e59ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e59d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E59D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E59D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E59D8u;
    // 0x2e59d8: 0x0  nop
    ctx->pc = 0x2e59d8u;
    // NOP
    // 0x2e59dc: 0x0  nop
    ctx->pc = 0x2e59dcu;
    // NOP
    ctx->pc = 0x2e59e0u;
}

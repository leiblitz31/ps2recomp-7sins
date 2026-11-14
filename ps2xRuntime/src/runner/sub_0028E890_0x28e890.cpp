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

// Function: sub_0028E890
// Address: 0x28e890 - 0x28eaa0
void sub_0028E890_0x28e890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E890_0x28e890");
#endif

    switch (ctx->pc) {
        case 0x28e8ccu: goto label_28e8cc;
        case 0x28e8e0u: goto label_28e8e0;
        case 0x28e8f4u: goto label_28e8f4;
        case 0x28e904u: goto label_28e904;
        case 0x28e91cu: goto label_28e91c;
        case 0x28e934u: goto label_28e934;
        case 0x28e94cu: goto label_28e94c;
        case 0x28e96cu: goto label_28e96c;
        case 0x28e984u: goto label_28e984;
        case 0x28e994u: goto label_28e994;
        case 0x28e9bcu: goto label_28e9bc;
        case 0x28e9d0u: goto label_28e9d0;
        case 0x28e9e4u: goto label_28e9e4;
        case 0x28e9f0u: goto label_28e9f0;
        case 0x28ea04u: goto label_28ea04;
        case 0x28ea1cu: goto label_28ea1c;
        case 0x28ea44u: goto label_28ea44;
        case 0x28ea58u: goto label_28ea58;
        case 0x28ea74u: goto label_28ea74;
        default: break;
    }

    ctx->pc = 0x28e890u;

    // 0x28e890: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x28e890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x28e894: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28e894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28e898: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28e898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28e89c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28e89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28e8a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28e8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28e8a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28e8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28e8a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28e8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28e8ac: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x28e8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x28e8b0: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x28e8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x28e8b4: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x28e8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x28e8b8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x28e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28e8bc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x28e8bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28e8c0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x28e8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28e8c4: 0xc0a1474  jal         func_2851D0
    ctx->pc = 0x28E8C4u;
    SET_GPR_U32(ctx, 31, 0x28E8CCu);
    ctx->pc = 0x2851D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2851D0u, 0x28E8C4u, 0x28E8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E8CCu;
label_28e8cc:
    // 0x28e8cc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x28e8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28e8d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e8d4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x28e8d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28e8d8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x28E8D8u;
    {
        const bool branch_taken_0x28e8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e8d8) {
            ctx->pc = 0x28E954u;
            goto label_28e954;
        }
    }
    ctx->pc = 0x28E8E0u;
label_28e8e0:
    // 0x28e8e0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x28e8e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e8e4: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x28e8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x28e8e8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x28e8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28e8ec: 0xc0a3b40  jal         func_28ED00
    ctx->pc = 0x28E8ECu;
    SET_GPR_U32(ctx, 31, 0x28E8F4u);
    ctx->pc = 0x28ED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ED00u, 0x28E8ECu, 0x28E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E8F4u;
label_28e8f4:
    // 0x28e8f4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x28e8f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e8f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e8fc: 0xc0a3b30  jal         func_28ECC0
    ctx->pc = 0x28E8FCu;
    SET_GPR_U32(ctx, 31, 0x28E904u);
    ctx->pc = 0x28ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ECC0u, 0x28E8FCu, 0x28E904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E904u;
label_28e904:
    // 0x28e904: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x28e904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28e908: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x28e908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x28e90c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28e90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e910: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28e910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e914: 0xc0a3b10  jal         func_28EC40
    ctx->pc = 0x28E914u;
    SET_GPR_U32(ctx, 31, 0x28E91Cu);
    ctx->pc = 0x28EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EC40u, 0x28E914u, 0x28E91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E91Cu;
label_28e91c:
    // 0x28e91c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x28e91cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28e920: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x28E920u;
    {
        const bool branch_taken_0x28e920 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e920) {
            ctx->pc = 0x28E940u;
            goto label_28e940;
        }
    }
    ctx->pc = 0x28E928u;
    // 0x28e928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e92c: 0xc0a3b08  jal         func_28EC20
    ctx->pc = 0x28E92Cu;
    SET_GPR_U32(ctx, 31, 0x28E934u);
    ctx->pc = 0x28EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EC20u, 0x28E92Cu, 0x28E934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E934u;
label_28e934:
    // 0x28e934: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x28e934u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28e938: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28E938u;
    {
        const bool branch_taken_0x28e938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e938) {
            ctx->pc = 0x28E950u;
            goto label_28e950;
        }
    }
    ctx->pc = 0x28E940u;
label_28e940:
    // 0x28e940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e944: 0xc0a3b00  jal         func_28EC00
    ctx->pc = 0x28E944u;
    SET_GPR_U32(ctx, 31, 0x28E94Cu);
    ctx->pc = 0x28EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EC00u, 0x28E944u, 0x28E94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E94Cu;
label_28e94c:
    // 0x28e94c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x28e94cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28e950:
    // 0x28e950: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x28e950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28e954:
    // 0x28e954: 0x1600ffe2  bnez        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x28E954u;
    {
        const bool branch_taken_0x28e954 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e954) {
            ctx->pc = 0x28E8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28e8e0;
        }
    }
    ctx->pc = 0x28E95Cu;
    // 0x28e95c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x28e95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x28e960: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28e960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e964: 0xc0a3af4  jal         func_28EBD0
    ctx->pc = 0x28E964u;
    SET_GPR_U32(ctx, 31, 0x28E96Cu);
    ctx->pc = 0x28EBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EBD0u, 0x28E964u, 0x28E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E96Cu;
label_28e96c:
    // 0x28e96c: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x28E96Cu;
    {
        const bool branch_taken_0x28e96c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e96c) {
            ctx->pc = 0x28E9E4u;
            goto label_28e9e4;
        }
    }
    ctx->pc = 0x28E974u;
    // 0x28e974: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x28e974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x28e978: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x28e978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28e97c: 0xc0a3ae4  jal         func_28EB90
    ctx->pc = 0x28E97Cu;
    SET_GPR_U32(ctx, 31, 0x28E984u);
    ctx->pc = 0x28EB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB90u, 0x28E97Cu, 0x28E984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E984u;
label_28e984:
    // 0x28e984: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x28e984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x28e988: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x28e988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x28e98c: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x28E98Cu;
    SET_GPR_U32(ctx, 31, 0x28E994u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x28E98Cu, 0x28E994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E994u;
label_28e994:
    // 0x28e994: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28E994u;
    {
        const bool branch_taken_0x28e994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e994) {
            ctx->pc = 0x28E9D8u;
            goto label_28e9d8;
        }
    }
    ctx->pc = 0x28E99Cu;
    // 0x28e99c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x28e99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28e9a0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x28e9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28e9a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28e9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e9a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x28e9a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e9ac: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x28e9acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28e9b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28e9b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e9b4: 0xc0a3e2c  jal         func_28F8B0
    ctx->pc = 0x28E9B4u;
    SET_GPR_U32(ctx, 31, 0x28E9BCu);
    ctx->pc = 0x28F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F8B0u, 0x28E9B4u, 0x28E9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E9BCu;
label_28e9bc:
    // 0x28e9bc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28e9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28e9c0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x28e9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28e9c4: 0x2786a2b8  addiu       $a2, $gp, -0x5D48
    ctx->pc = 0x28e9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943416));
    // 0x28e9c8: 0xc0a3ad0  jal         func_28EB40
    ctx->pc = 0x28E9C8u;
    SET_GPR_U32(ctx, 31, 0x28E9D0u);
    ctx->pc = 0x28EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB40u, 0x28E9C8u, 0x28E9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E9D0u;
label_28e9d0:
    // 0x28e9d0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x28E9D0u;
    {
        const bool branch_taken_0x28e9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e9d0) {
            ctx->pc = 0x28EA74u;
            goto label_28ea74;
        }
    }
    ctx->pc = 0x28E9D8u;
label_28e9d8:
    // 0x28e9d8: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x28e9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x28e9dc: 0xc0a3ac0  jal         func_28EB00
    ctx->pc = 0x28E9DCu;
    SET_GPR_U32(ctx, 31, 0x28E9E4u);
    ctx->pc = 0x28EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB00u, 0x28E9DCu, 0x28E9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E9E4u;
label_28e9e4:
    // 0x28e9e4: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x28e9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x28e9e8: 0xc0a3aa8  jal         func_28EAA0
    ctx->pc = 0x28E9E8u;
    SET_GPR_U32(ctx, 31, 0x28E9F0u);
    ctx->pc = 0x28EAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EAA0u, 0x28E9E8u, 0x28E9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E9F0u;
label_28e9f0:
    // 0x28e9f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x28e9f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e9f4: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x28e9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x28e9f8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x28e9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28e9fc: 0xc0a3b40  jal         func_28ED00
    ctx->pc = 0x28E9FCu;
    SET_GPR_U32(ctx, 31, 0x28EA04u);
    ctx->pc = 0x28ED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ED00u, 0x28E9FCu, 0x28EA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA04u;
label_28ea04:
    // 0x28ea04: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x28ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28ea08: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x28ea08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x28ea0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28ea0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ea10: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28ea10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ea14: 0xc0a3b10  jal         func_28EC40
    ctx->pc = 0x28EA14u;
    SET_GPR_U32(ctx, 31, 0x28EA1Cu);
    ctx->pc = 0x28EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EC40u, 0x28EA14u, 0x28EA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA1Cu;
label_28ea1c:
    // 0x28ea1c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28EA1Cu;
    {
        const bool branch_taken_0x28ea1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ea1c) {
            ctx->pc = 0x28EA60u;
            goto label_28ea60;
        }
    }
    ctx->pc = 0x28EA24u;
    // 0x28ea24: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x28ea24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x28ea28: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x28ea28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28ea2c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28ea2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ea30: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x28ea30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ea34: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x28ea34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28ea38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28ea38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ea3c: 0xc0a3e2c  jal         func_28F8B0
    ctx->pc = 0x28EA3Cu;
    SET_GPR_U32(ctx, 31, 0x28EA44u);
    ctx->pc = 0x28F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F8B0u, 0x28EA3Cu, 0x28EA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA44u;
label_28ea44:
    // 0x28ea44: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28ea44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28ea48: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x28ea48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x28ea4c: 0x2786a2bc  addiu       $a2, $gp, -0x5D44
    ctx->pc = 0x28ea4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943420));
    // 0x28ea50: 0xc0a3ad0  jal         func_28EB40
    ctx->pc = 0x28EA50u;
    SET_GPR_U32(ctx, 31, 0x28EA58u);
    ctx->pc = 0x28EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB40u, 0x28EA50u, 0x28EA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA58u;
label_28ea58:
    // 0x28ea58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28EA58u;
    {
        const bool branch_taken_0x28ea58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ea58) {
            ctx->pc = 0x28EA74u;
            goto label_28ea74;
        }
    }
    ctx->pc = 0x28EA60u;
label_28ea60:
    // 0x28ea60: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28ea60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28ea64: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x28ea64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x28ea68: 0x2786a2c0  addiu       $a2, $gp, -0x5D40
    ctx->pc = 0x28ea68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943424));
    // 0x28ea6c: 0xc0a3ad0  jal         func_28EB40
    ctx->pc = 0x28EA6Cu;
    SET_GPR_U32(ctx, 31, 0x28EA74u);
    ctx->pc = 0x28EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB40u, 0x28EA6Cu, 0x28EA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EA74u;
label_28ea74:
    // 0x28ea74: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28ea74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28ea78: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28ea78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28ea7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28ea7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28ea80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28ea80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ea84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28ea84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ea88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28ea88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ea8c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x28ea8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x28ea90: 0x3e00008  jr          $ra
    ctx->pc = 0x28EA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EA98u;
    // 0x28ea98: 0x0  nop
    ctx->pc = 0x28ea98u;
    // NOP
    // 0x28ea9c: 0x0  nop
    ctx->pc = 0x28ea9cu;
    // NOP
    ctx->pc = 0x28eaa0u;
}

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

// Function: sub_002A1210
// Address: 0x2a1210 - 0x2a1550
void sub_002A1210_0x2a1210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1210_0x2a1210");
#endif

    switch (ctx->pc) {
        case 0x2a12a4u: goto label_2a12a4;
        case 0x2a12ccu: goto label_2a12cc;
        case 0x2a12f8u: goto label_2a12f8;
        case 0x2a1304u: goto label_2a1304;
        case 0x2a131cu: goto label_2a131c;
        case 0x2a1324u: goto label_2a1324;
        case 0x2a1338u: goto label_2a1338;
        case 0x2a139cu: goto label_2a139c;
        case 0x2a13a4u: goto label_2a13a4;
        case 0x2a13b0u: goto label_2a13b0;
        case 0x2a13d8u: goto label_2a13d8;
        case 0x2a13ecu: goto label_2a13ec;
        case 0x2a13fcu: goto label_2a13fc;
        case 0x2a1450u: goto label_2a1450;
        case 0x2a14a4u: goto label_2a14a4;
        case 0x2a14c8u: goto label_2a14c8;
        case 0x2a1504u: goto label_2a1504;
        case 0x2a1524u: goto label_2a1524;
        default: break;
    }

    ctx->pc = 0x2a1210u;

    // 0x2a1210: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2a1210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2a1214: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a1214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a1218: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a1218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a121c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a121cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a1220: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a1220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a1224: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a1224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a1228: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2a1228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x2a122c: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2a122cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x2a1230: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x2a1230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x2a1234: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x2a1234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
    // 0x2a1238: 0xafa800a0  sw          $t0, 0xA0($sp)
    ctx->pc = 0x2a1238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 8));
    // 0x2a123c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a123cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1240: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2a1240u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a1244: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1244u;
    {
        const bool branch_taken_0x2a1244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1244) {
            ctx->pc = 0x2A1258u;
            goto label_2a1258;
        }
    }
    ctx->pc = 0x2A124Cu;
    // 0x2a124c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a124cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1250: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x2A1250u;
    {
        const bool branch_taken_0x2a1250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1250) {
            ctx->pc = 0x2A1528u;
            goto label_2a1528;
        }
    }
    ctx->pc = 0x2A1258u;
label_2a1258:
    // 0x2a1258: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2a1258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a125c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a125cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a1260: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a1260u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1264: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a1264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a1268: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2a1268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a126c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a126cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1270: 0x8c4201e8  lw          $v0, 0x1E8($v0)
    ctx->pc = 0x2a1270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x2a1274: 0x10020010  beq         $zero, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A1274u;
    {
        const bool branch_taken_0x2a1274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a1274) {
            ctx->pc = 0x2A12B8u;
            goto label_2a12b8;
        }
    }
    ctx->pc = 0x2A127Cu;
    // 0x2a127c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2a127cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a1280: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a1280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a1284: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a1284u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1288: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a1288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a128c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2a128cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1290: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a1290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1294: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2a1294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1298: 0x244501ec  addiu       $a1, $v0, 0x1EC
    ctx->pc = 0x2a1298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 492));
    // 0x2a129c: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x2A129Cu;
    SET_GPR_U32(ctx, 31, 0x2A12A4u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x2A129Cu, 0x2A12A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A12A4u;
label_2a12a4:
    // 0x2a12a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A12A4u;
    {
        const bool branch_taken_0x2a12a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a12a4) {
            ctx->pc = 0x2A12B8u;
            goto label_2a12b8;
        }
    }
    ctx->pc = 0x2A12ACu;
    // 0x2a12ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a12acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a12b0: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x2A12B0u;
    {
        const bool branch_taken_0x2a12b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a12b0) {
            ctx->pc = 0x2A1528u;
            goto label_2a1528;
        }
    }
    ctx->pc = 0x2A12B8u;
label_2a12b8:
    // 0x2a12b8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2a12b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a12bc: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2a12bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a12c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a12c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a12c4: 0xc0a8554  jal         func_2A1550
    ctx->pc = 0x2A12C4u;
    SET_GPR_U32(ctx, 31, 0x2A12CCu);
    ctx->pc = 0x2A1550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1550u, 0x2A12C4u, 0x2A12CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A12CCu;
label_2a12cc:
    // 0x2a12cc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2a12ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a12d0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a12d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a12d4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a12d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a12d8: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a12d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a12dc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2a12dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a12e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a12e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a12e4: 0x244401ec  addiu       $a0, $v0, 0x1EC
    ctx->pc = 0x2a12e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 492));
    // 0x2a12e8: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2a12e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a12ec: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x2a12ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a12f0: 0xc0bc77e  jal         func_2F1DF8
    ctx->pc = 0x2A12F0u;
    SET_GPR_U32(ctx, 31, 0x2A12F8u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x2A12F0u, 0x2A12F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A12F8u;
label_2a12f8:
    // 0x2a12f8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a12f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a12fc: 0xc041b48  jal         func_106D20
    ctx->pc = 0x2A12FCu;
    SET_GPR_U32(ctx, 31, 0x2A1304u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x2A12FCu, 0x2A1304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1304u;
label_2a1304:
    // 0x2a1304: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a1304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a1308: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2a1308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2a130c: 0x24a5d9f0  addiu       $a1, $a1, -0x2610
    ctx->pc = 0x2a130cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957552));
    // 0x2a1310: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2a1310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1314: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x2A1314u;
    SET_GPR_U32(ctx, 31, 0x2A131Cu);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x2A1314u, 0x2A131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A131Cu;
label_2a131c:
    // 0x2a131c: 0xc122470  jal         func_4891C0
    ctx->pc = 0x2A131Cu;
    SET_GPR_U32(ctx, 31, 0x2A1324u);
    ctx->pc = 0x4891C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891C0u, 0x2A131Cu, 0x2A1324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1324u;
label_2a1324:
    // 0x2a1324: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a1324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1328: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2a1328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a132c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a132cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1330: 0xc123a28  jal         func_48E8A0
    ctx->pc = 0x2A1330u;
    SET_GPR_U32(ctx, 31, 0x2A1338u);
    ctx->pc = 0x48E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E8A0u, 0x2A1330u, 0x2A1338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1338u;
label_2a1338:
    // 0x2a1338: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2a1338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a133c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2a133cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2a1340: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2a1340u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a1344: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x2a1344u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2a1348: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2a1348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a134c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a134cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a1350: 0xac6201e8  sw          $v0, 0x1E8($v1)
    ctx->pc = 0x2a1350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 488), GPR_U32(ctx, 2));
    // 0x2a1354: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2a1354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a1358: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a1358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a135c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a135cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1360: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a1360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a1364: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2a1364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1368: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a1368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a136c: 0x8c4201e8  lw          $v0, 0x1E8($v0)
    ctx->pc = 0x2a136cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x2a1370: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2A1370u;
    {
        const bool branch_taken_0x2a1370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1370) {
            ctx->pc = 0x2A1510u;
            goto label_2a1510;
        }
    }
    ctx->pc = 0x2A1378u;
    // 0x2a1378: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2a1378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a137c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a137cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a1380: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a1380u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1384: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a1384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a1388: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2a1388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a138c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a138cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1390: 0x8c4401e8  lw          $a0, 0x1E8($v0)
    ctx->pc = 0x2a1390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x2a1394: 0xc0a63a0  jal         func_298E80
    ctx->pc = 0x2A1394u;
    SET_GPR_U32(ctx, 31, 0x2A139Cu);
    ctx->pc = 0x298E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298E80u, 0x2A1394u, 0x2A139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A139Cu;
label_2a139c:
    // 0x2a139c: 0xc0a06e0  jal         func_281B80
    ctx->pc = 0x2A139Cu;
    SET_GPR_U32(ctx, 31, 0x2A13A4u);
    ctx->pc = 0x281B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281B80u, 0x2A139Cu, 0x2A13A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A13A4u;
label_2a13a4:
    // 0x2a13a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a13a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a13a8: 0xc0a06e4  jal         func_281B90
    ctx->pc = 0x2A13A8u;
    SET_GPR_U32(ctx, 31, 0x2A13B0u);
    ctx->pc = 0x281B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281B90u, 0x2A13A8u, 0x2A13B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A13B0u;
label_2a13b0:
    // 0x2a13b0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2a13b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a13b4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2a13b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2a13b8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2a13b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a13bc: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x2a13bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2a13c0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2a13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a13c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a13c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a13c8: 0x8c6401e8  lw          $a0, 0x1E8($v1)
    ctx->pc = 0x2a13c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
    // 0x2a13cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a13ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a13d0: 0xc0a63b0  jal         func_298EC0
    ctx->pc = 0x2A13D0u;
    SET_GPR_U32(ctx, 31, 0x2A13D8u);
    ctx->pc = 0x298EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298EC0u, 0x2A13D0u, 0x2A13D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A13D8u;
label_2a13d8:
    // 0x2a13d8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2a13d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a13dc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2a13dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2a13e0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2a13e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2a13e4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2A13E4u;
    SET_GPR_U32(ctx, 31, 0x2A13ECu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A13E4u, 0x2A13ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A13ECu;
label_2a13ec:
    // 0x2a13ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a13ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a13f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a13f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a13f4: 0xc096950  jal         func_25A540
    ctx->pc = 0x2A13F4u;
    SET_GPR_U32(ctx, 31, 0x2A13FCu);
    ctx->pc = 0x25A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A540u, 0x2A13F4u, 0x2A13FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A13FCu;
label_2a13fc:
    // 0x2a13fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a13fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1400: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2a1400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a1404: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a1404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a1408: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a1408u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a140c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a140cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a1410: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2a1410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1414: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a1414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1418: 0x8c4201c0  lw          $v0, 0x1C0($v0)
    ctx->pc = 0x2a1418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 448)));
    // 0x2a141c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A141Cu;
    {
        const bool branch_taken_0x2a141c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a141c) {
            ctx->pc = 0x2A1470u;
            goto label_2a1470;
        }
    }
    ctx->pc = 0x2A1424u;
    // 0x2a1424: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2a1424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a1428: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a1428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a142c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a142cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1430: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a1430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a1434: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2a1434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1438: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a1438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a143c: 0x244401c0  addiu       $a0, $v0, 0x1C0
    ctx->pc = 0x2a143cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x2a1440: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a1440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1444: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x2a1444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a1448: 0xc0a79c0  jal         func_29E700
    ctx->pc = 0x2A1448u;
    SET_GPR_U32(ctx, 31, 0x2A1450u);
    ctx->pc = 0x29E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E700u, 0x2A1448u, 0x2A1450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1450u;
label_2a1450:
    // 0x2a1450: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2a1450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a1454: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2a1454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a1458: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a1458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a145c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a145cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1460: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a1460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a1464: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2a1464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1468: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a1468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a146c: 0xac440290  sw          $a0, 0x290($v0)
    ctx->pc = 0x2a146cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 656), GPR_U32(ctx, 4));
label_2a1470:
    // 0x2a1470: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2a1470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a1474: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A1474u;
    {
        const bool branch_taken_0x2a1474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1474) {
            ctx->pc = 0x2A14A4u;
            goto label_2a14a4;
        }
    }
    ctx->pc = 0x2A147Cu;
    // 0x2a147c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2a147cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a1480: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a1480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a1484: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a1484u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1488: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a1488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a148c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2a148cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1490: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a1490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1494: 0x8c4401e8  lw          $a0, 0x1E8($v0)
    ctx->pc = 0x2a1494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x2a1498: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x2a1498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2a149c: 0xc123478  jal         func_48D1E0
    ctx->pc = 0x2A149Cu;
    SET_GPR_U32(ctx, 31, 0x2A14A4u);
    ctx->pc = 0x48D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D1E0u, 0x2A149Cu, 0x2A14A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A14A4u;
label_2a14a4:
    // 0x2a14a4: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2a14a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a14a8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a14a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a14ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a14acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a14b0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a14b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a14b4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2a14b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a14b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a14b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a14bc: 0x8c4401e8  lw          $a0, 0x1E8($v0)
    ctx->pc = 0x2a14bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x2a14c0: 0xc123208  jal         func_48C820
    ctx->pc = 0x2A14C0u;
    SET_GPR_U32(ctx, 31, 0x2A14C8u);
    ctx->pc = 0x48C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C820u, 0x2A14C0u, 0x2A14C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A14C8u;
label_2a14c8:
    // 0x2a14c8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2a14c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a14cc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2a14ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2a14d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a14d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a14d4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x2a14d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a14d8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2a14d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a14dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a14dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a14e0: 0x8c6201c0  lw          $v0, 0x1C0($v1)
    ctx->pc = 0x2a14e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 448)));
    // 0x2a14e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a14e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a14e8: 0xac6201c0  sw          $v0, 0x1C0($v1)
    ctx->pc = 0x2a14e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 448), GPR_U32(ctx, 2));
    // 0x2a14ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a14ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a14f0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2a14f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a14f4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a14f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a14f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a14f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a14fc: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2A14FCu;
    SET_GPR_U32(ctx, 31, 0x2A1504u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2A14FCu, 0x2A1504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1504u;
label_2a1504:
    // 0x2a1504: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a1504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1508: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A1508u;
    {
        const bool branch_taken_0x2a1508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1508) {
            ctx->pc = 0x2A1528u;
            goto label_2a1528;
        }
    }
    ctx->pc = 0x2A1510u;
label_2a1510:
    // 0x2a1510: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a1510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1514: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a1514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a1518: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a1518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a151c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2A151Cu;
    SET_GPR_U32(ctx, 31, 0x2A1524u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2A151Cu, 0x2A1524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1524u;
label_2a1524:
    // 0x2a1524: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a1524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a1528:
    // 0x2a1528: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a1528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a152c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a152cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1530: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a1530u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1534: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a1534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1538: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a1538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a153c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2a153cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a1540: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1548u;
    // 0x2a1548: 0x0  nop
    ctx->pc = 0x2a1548u;
    // NOP
    // 0x2a154c: 0x0  nop
    ctx->pc = 0x2a154cu;
    // NOP
    ctx->pc = 0x2a1550u;
}
